/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given an array arr[] of size N. The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.

Constraints
1 <= N <= 10^6
0 <= Ai <= 10^6

Example
Input:
7
1 5 3 4 3 5 6

Output:
2

Explanation:
5 is appearing twice and its first appearance is at index 2 which is less than 3
whose first occurring index is 3.

*/

#include <iostream>
using namespace std;

void SmallestInteger(int arr[], int len)
{
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

    SmallestInteger(arr, arrayLength);

    return 0;
}
