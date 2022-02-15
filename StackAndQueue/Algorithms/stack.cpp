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

void print(int arr[], int top)
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
        return;
    }

    for (int i = 0; i <= top; i++)
    {
        cout << arr[i] << " -> ";
    }

    cout << endl;
    return;
}

int push(int arr[], int element, int top, int length)
{
    top += 1;

    if (top >= length)
    {
        cout << "stack is full" << endl;
        return (top - 1);
    }

    arr[top] = element;
    return top;
}

int pop(int arr[], int top)
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
        return top;
    }

    return (top - 1);
}

int main()
{

    int arrayLength;
    cout << "Enter the length of array:- ";
    cin >> arrayLength;

    int arr[arrayLength];
    int top = -1;
    cout << "enter 1 to perform push" << endl
         << "enter 2 to perform pop" << endl
         << "enter 3 to print stack" << endl
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
            top = push(arr, element, top, arrayLength);
        }
        else if (operation == 2)
        {
            cout << "pop operation being called" << endl;

            top = pop(arr, top);
        }
        else if (operation == 3)
        {
            print(arr, top);
        }

    } while (operation != 4);

    return 0;
}
