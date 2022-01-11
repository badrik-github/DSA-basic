/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array.
It is given that all array elements are distinct.

Example 1:

Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given 
array is 7.
Example 2:

Input:
N = 5
arr[] = 7 10 4 20 15
K = 4
Output : 15
Explanation :
4th smallest element in the given 
array is 15.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= arr[i] <= 105
1 <= K <= N
*/

#include <iostream>
using namespace std;

int KSmallsest(int arr[], int len)
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

    int ans = KSmallsest(arr, arrayLength);

    cout << K << " th smallest element is :-" << ans;

    return 0;
}