/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Implementing Stack using array
*/

#include <iostream>
using namespace std;

void print(int arr[], int *start, int *end, int *count, int length)
{

    if (*count == 0)
    {
        cout << "queue is empty";
        return;
    }
    for (int i = *start; i < *start + *count; i++)
    {
        if (i > length - 1)
        {
            cout << arr[i - length] << "->";
        }
        else
        {
            cout << arr[i] << "->";
        }
    }
}

void push(int arr[], int length, int element, int *start, int *end, int *count)
{

    if (*start == -1 & *end == -1)
    {
        *start = 0;
        *end = 0;
        arr[*start] = element;
        *count += 1;
        return;
    }

    if (*count == length)
    {
        cout << "queue is full" << endl;
        return;
    }

    if (*end == (length - 1))
    {
        *end = 0;
        arr[*end] = element;
        *count += 1;
        return;
    }
    else
    {
        *end += 1;
        arr[*end] = element;
        *count += 1;
        return;
    }
}

void pop(int arr[], int length, int *start, int *end, int *count)
{
    if (*count == 0)
    {
        cout << "queue is empty" << endl;
        return;
    }
    if (*start == (length - 1))
    {
        *start = 0;
        *count -= 1;
    }
    else
    {

        *count -= 1;
        *start += 1;
        return;
    }
}

int main()
{

    int arrayLength;
    cout << "Enter the length of array:- ";
    cin >> arrayLength;

    int arr[arrayLength];

    int start = -1;
    int end = -1;
    int count = 0;

    cout << "enter 1 to perform push" << endl
         << "enter 2 to perform pop" << endl
         << "enter 3 to print queue" << endl
         << "enter 4 to exit" << endl;

    int operation;

    do
    {
        cout << "enter operation:- ";
        cin >> operation;
        cout << endl;

        if (operation == 1)
        {
            int element;
            cout << "enter element you want to push:- ";
            cin >> element;
            cout << endl;
            push(arr, arrayLength, element, &start, &end, &count);
        }
        else if (operation == 2)
        {
            cout << "pop operation being called" << endl;

            pop(arr, arrayLength, &start, &end, &count);
        }
        else if (operation == 3)
        {
            print(arr, &start, &end, &count, arrayLength);
        }

    } while (operation != 4);

    return 0;
}
