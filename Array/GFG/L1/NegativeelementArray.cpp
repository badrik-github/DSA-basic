/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Given an unsorted array arr[] of size N having both negative and positive integers. The task is place all negative element at the end of array without changing the order of positive element and negative element.

Example 1:

Input : 
N = 8
arr[] = {1, -1, 3, 2, -7, -5, 11, 6 }
Output : 
1  3  2  11  6  -1  -7  -5

Example 2:

Input : 
N=8
arr[] = {-5, 7, -3, -4, 9, 10, -1, 11}
Output :
7  9  10  11  -5  -3  -4  -1

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)
 
Constraints:
1 ≤ N ≤ 105
-105 ≤ arr[] ≤ 105
*/

#include <iostream>
using namespace std;

void negative(int arr[], int len)
{

    int i = 0;
    int j = len - 1;

    int temp;
    while (i < j)
    {
        temp = 0;
        if (arr[i] > 0)
        {
            i++;
        }
        else if (arr[j] < 0)
        {
            j--;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ->";
    }
}

// void negative(int arr[], int len)
// {
//     int low = 0;
//     int index = 0;
//     int temp;

//     while (index < len && low < len)
//     {
//         temp = 0;
//         if (arr[index] < 0)
//         {

//             temp = arr[index];
//             arr[index] = arr[low];
//             arr[low] = temp;

//             low++;
//         }
//         else
//         {
//             index++;
//         }
//     }

//     for (int i = 0; i < len; i++)
//     {
//         cout << arr[i] << " ->";
//     }
// }

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

    negative(arr, arrayLength);

    return 0;
}
