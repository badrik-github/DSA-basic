/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Write a program to find the sum of max element of subarray
*/

#include <iostream>
using namespace std;

//kadane algo is used to find the max possible sum from all sub arrays
void kadane(int arr[], int len)
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

    cout << maxsum;
}

// this is using only one loop but it is internally following a time complexity of O(n2) as for every i every j is traversed
void MaxSubArraySum(int arr[], int len)
{
    int i = -1;
    int j = -1;

    int sum = 0;
    int ans = 0;

    while (i < (len - 1) || j < (len - 1))
    {

        if (i == -1 || j == (len - 1))
        {
            i++;
            j = i;
            sum = arr[i];
            ans = max(ans, sum);
        }
        else
        {
            j++;
            sum = sum + arr[j];
            ans = max(ans, sum);
        }
    }

    cout << "max sum is:-" << ans;
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

    kadane(arr, arrayLength);

    return 0;
}
