/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.



Example 1:

Input
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4
*/

#include <iostream>
#include <unordered_map>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *previous;
};

struct Node *head = NULL;
struct Node *last = NULL;

unordered_map<int, struct Node *> hashMap;

void insertNode(int key, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;

    if (head == NULL)
    {
        new_node->next = head;
        new_node->previous = head;
        last = new_node;
    }
    else
    {
        new_node->next = head;
        new_node->previous = NULL;
        head->previous = new_node;
    }
    head = new_node;

    hashMap[key] = new_node;
}

void deleteNode(struct Node *remove)
{
    if (remove == head)
    {
        head = remove->next;
        delete remove;
        return;
    }
    else if (remove == last)
    {
        last = remove->previous;
        delete remove;
        return;
    }
    else
    {
        struct Node *ptr;
        ptr = head;
        while (ptr != NULL)
        {

            if (ptr == remove)
            {
                ptr->next->previous = ptr->previous;
                ptr->previous->next = ptr->next;
                delete ptr;
                break;
            }
            ptr = ptr->next;
        }
        return;
    }
}

void deleteLast()
{
    struct Node *ptr = last;
    last = ptr->previous;
    last->next = NULL;
    delete ptr;
}

void displayStraight()
{
    struct Node *ptr;
    ptr = head;

    cout << "straight: ";
    while (ptr != NULL)
    {
        cout << ptr->previous << ":" << ptr->data << ":" << ptr->next << " -> ";
        ptr = ptr->next;
    }
    cout << endl;
}

void displayReverse()
{
    struct Node *ptr;
    ptr = last;
    cout << "reverse: ";
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->previous;
    }
}

int main()
{
    int choice;

    int length;
    cout << "enter the length of catch memory :- ";
    cin >> length;

    int count = 0;
    cout << "enter choice \n 1 for insert \n 2 for display \n 3 for get \n 4 for exit \n";
    do
    {
        cin >> choice;

        if (choice == 1)
        {
            int key;
            cout << "enter key :- ";
            cin >> key;

            int value;
            cout << "enter value :- ";
            cin >> value;

            if (length == count)
            {
                deleteLast();
                insertNode(key, value);
            }
            else
            {
                count++;
                insertNode(key, value);
            }
        }
        else if (choice == 2)
        {
            displayStraight();
        }
        else if (choice == 3)
        {
            int tempKey;
            cout << "enter key :- ";
            cin >> tempKey;

            if (hashMap[tempKey] == 0)
            {
                cout << "LCU catch empty \n";
            }
            else
            {
                struct Node *ptr = hashMap[tempKey];

                int x = ptr->data;

                deleteNode(ptr);
                insertNode(tempKey, x);
            }
        }
        else if (choice == 4)
        {
            cout << "Bye Bye......";
        }
        else
        {
            cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}