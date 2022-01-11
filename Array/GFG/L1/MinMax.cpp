/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

Example 1:

Input:
N = 6
A[] = {3, 2, 1, 56, 10000, 167}
Output:
min = 1, max =  10000
 
Example 2:

Input:
N = 5
A[]  = {1, 345, 234, 21, 56789}
Output:
min = 1, max = 56789
 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 105
1 <= Ai <=1012
*/

#include <iostream>
using namespace std;

void MinMax(int arr[], int len)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "min element is :- " << min << endl;
    cout << "max element is :- " << max << endl;
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

    MinMax(arr, arrayLength);

    return 0;
}
