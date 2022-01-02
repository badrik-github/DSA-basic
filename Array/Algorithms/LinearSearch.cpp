/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to perfoem linear search on the array; 

*/

#include <iostream>
using namespace std;

void LinearSearch(int arr[], int len, int key)
{

    int flag = 1;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            cout << "The element is at index " << i;
            flag = 0;
        }
    }

    if (flag == 1)
    {
        cout << "Element not found ";
    }
}

int main()
{

    int arrayLength;
    cout << "Enter the length of array:- ";
    cin >> arrayLength;

    int arr[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to search";
    cin >> key;

    LinearSearch(arr, arrayLength, key);

    return 0;
}
