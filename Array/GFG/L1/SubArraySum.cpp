/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

 

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
 

Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.
 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105
1 <= Ai <= 109
*/

/*

Solution :- 
    Take Two pointers  low , high. Initially both are at 0 and a int sum =0 (Initially) to mantain the sum now increment j and add value of arr[j] to the sum 
    now if sum < k increment j and add value into sum again if value of sum increases by k incerase low and subtract value of i from it 

*/

/*
    example solution given in geek for geek is little different please check;
    https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1
*/
#include <iostream>
using namespace std;

void KeySum(int arr[], int len, int k)
{
    int low = 0;
    int high = 1;
    int sum = arr[0] + arr[1];

    while (low < high)
    {

        if (sum == k)
        {
            cout << "min index:- " << low << endl;
            cout << "max index:- " << high << endl;
            break;
        }

        else if (sum < k)
        {
            high++;
            sum += arr[high];
        }

        else
        {
            sum -= arr[low];
            low++;
        }
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

    int k;
    cout << "Enter the Key sum:- ";
    cin >> k;

    KeySum(arr, arrayLength, k);

    return 0;
}