/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Question:- Create a DoublyLinkList;
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