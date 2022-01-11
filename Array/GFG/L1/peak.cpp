/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, find the index of any one of its peak elements.
Note: The generated output will always be 1 if the index that you return is correct. Otherwise output will be 0. 


Example 1:

Input:
N = 3
arr[] = {1,2,3}
Output: 2
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
Example 2:

Input:
N = 2
arr[] = {3,4}
Output: 1
Explanation: 4 (at index 1) is the 
peak element as it is greater than 
its only neighbour element 3.
 

Expected Time Complexity: O(log N)
Expected Auxiliary Space: O(1)


Constraints:
1 ≤ N ≤ 10^5
1 ≤ A[] ≤ 10^6
*/

#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int index = 0;
    int max_element = arr[0];
    for (int i = 1; i < n; i++)
    {

        if (i == (n - 1))
        {
            if (arr[i] > arr[i - 1])
            {
                index = i;
                break;
            }
        }
        else
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                index = i;
                break;
            }
        }
    }

    return index;
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

    int ans = peakElement(arr, arrayLength);

    cout << " Peak Element is present at index" << ans;

    return 0;
}
