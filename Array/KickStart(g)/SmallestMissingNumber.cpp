/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2

Intuition
If in O(1), we can tell if an element is present in an array, then our task will be simpler.

For that, we will maintain a Check[ ] array, that will if an element x is present in
the array or not.

It will be of boolean type as we only need to check the presence or absence of the
number.

Constraints
1 <= N <= 105
10^-6 <= Ai <= 10^6
*/

#include <iostream>
using namespace std;

void MinMissingPositive(int arr[], int len)
{
    int max = 1e6;
    bool marker[max];
    for (int i = 0; i < max; i++)
    {
        marker[i] = false;
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] > 0)
        {
            marker[arr[i]] = true;
        }
    }

    for (int i = 1; i < max; i++)
    {

        if (marker[i] == false)
        {
            cout << "Missing Number is:-  " << i;
            break;
        }
    }
}

int main()
{

    int len;
    cout << "Enter the length of array:- ";
    cin >> len;

    int arr[len];

    for (int i = 0; i < len; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> arr[i];
    }

    MinMissingPositive(arr, len);

    return 0;
}
