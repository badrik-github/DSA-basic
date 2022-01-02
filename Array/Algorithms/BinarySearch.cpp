/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to perfoem Binary search on the array; 

*/

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int len, int key)
{
    int i = 0;
    int j = len;

    while (i <= j)
    {
        int mid = (i + j) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    return -1;
}

int main()
{
    cout << "Welcome to Binary Search";
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

    int result = BinarySearch(arr, arrayLength, key);

    cout << "Element found at index" << result;

    return 0;
}