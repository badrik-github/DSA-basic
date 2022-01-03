/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.

Constraints
1 <= N <= 105
0 <= Ai <= 1010

Example
Input:
N = 5, S = 12
A[] = {1,2,3,7,5}

Output: 2 4

Explanation: The sum of elements from 2nd position to 4th position is 12.

*/

#include <iostream>
using namespace std;

void SubSum(int arr[], int len, int s)
{

    int i = 0;
    int j = 1;

    int sum = arr[0] + arr[1];
    int count = 0;
    while (i < len || j < len)
    {
        count++;

        if (sum < s && j < len)
        {
            j++;
            sum = sum + arr[j];
        }
        else if (sum == s)
        {
            break;
        }
        else
        {
            sum = sum - arr[i];
            i++;
        }
    }

    if (sum == s)
    {
        for (int z = i; z <= j; z++)
        {
            cout << arr[z] << "->";
        }
    }
    else
    {
        cout << "No solution found";
    }

    cout << "count" << count;
}

int main()
{

    int len;
    cout << "Enter the length of array:- ";
    cin >> len;

    int s;
    cout << "Enter the Sum:-";
    cin >> s;

    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> arr[i];
    }

    SubSum(arr, len, s);

    return 0;
}
