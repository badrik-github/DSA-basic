/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.


Example 1:

Input: 
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated 
into ascending order.
Example 2:

Input: 
N = 3
arr[] = {0 1 0}
Output:
0 0 1
Explanation:
0s 1s and 2s are segregated 
into ascending order.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)


Constraints:
1 <= N <= 10^6
0 <= A[i] <= 2
*/

/*

here there are three solutions possible 

1 :-Use a quick sort or merge sort it will sort the array of 0,1,2
    But the time complexity of this will be O(nlog(n)) 

2 :-Second solution is use counting sort iterate through array in one pass and count the number of 0,1,2 in the array.
    int the second pass place the number of 0,1,2 in the pass
    but the complexity of this one will be O(n) for first pass and O(n) for the second pass so total complexity would be O(2n)

3 :-This problem is also similar to dutch man flag algorithm and can be can be solved in time complexity of O(n)
    it mantains 3 flag low,mid,high.
    and makes sure all 0 are on left of low, all 2 are on right of high and 1 will be sorted by it's self.

Third is the best of all.
*/

#include <iostream>
using namespace std;

void dutchAlgo(int arr[], int len)
{
    int low = 0;
    int mid = 0;
    int high = len - 1;

    int temp;
    while (mid <= high)
    {
        temp = 0;
        if (arr[mid] == 0)
        {
            temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;

            low++;
            mid++;
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }

        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << "-> ";
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

    dutchAlgo(arr, arrayLength);

    return 0;
}