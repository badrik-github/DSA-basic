/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Write a program to find the sum of max element of subarray the array is in circular fashion
*/

#include <iostream>
using namespace std;

int kadane(int arr[], int len)
{
    int maxsum = INT_MIN;
    int currentsum = 0;
    for (int i = 0; i < len; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }

        maxsum = max(maxsum, currentsum);
    }

    return maxsum;
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

    int totalsum = 0;
    for (int i = 0; i < arrayLength; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    int remove = kadane(arr, arrayLength);
    cout << remove;

    int wrapsum = totalsum + remove;

    cout << "circular array max element is" << wrapsum;

    return 0;
}
