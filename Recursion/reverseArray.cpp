/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to reverse an array using recursion ; 

*/

#include <iostream>
using namespace std;

void ReverseArray(int arr[], int i, int j)
{

    if (j <= i)
    {
        return;
    }

    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    return ReverseArray(arr, (i + 1), (j - 1));
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

    ReverseArray(arr, 0, (arrayLength - 1));

    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " -> ";
    }

    return 0;
}
