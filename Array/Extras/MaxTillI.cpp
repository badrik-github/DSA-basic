/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find max of all element from 0 to the current position of pointer i; 

*/

#include <iostream>
using namespace std;

void maxTillI(int arr[], int len)
{
    int maxNum = -19999999;

    for (int i = 0; i < len; i++)
    {
        maxNum = max(maxNum, arr[i]);
        cout << max(maxNum, arr[i]) << " ->";
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

    maxTillI(arr, arrayLength);

    return 0;
}
