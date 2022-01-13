/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.

Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.

Example 1:

Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.
Example 2:

Input:
6 2 
85 25 1 32 54 6
85 2 
Output: 
7
Explanation: 
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.

Constraints:
1 ≤ n, m ≤ 105
0 ≤ a[i], b[i] < 105

Expected Time Complexity : O((n+m)log(n+m))
Expected Auxillary Space : O(n+m)
*/

#include <iostream>
using namespace std;

void unionArray(int a1[], int a2[], int l1, int l2)
{
}

void Intersection(int a1[], int a2[], int l1, int l2)
{
}

int main()
{

    int l1;
    cout << "Enter the length of array 1:- ";
    cin >> l1;

    int a1[l1];

    for (int i = 0; i < l1; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> a1[i];
    }

    int l2;
    cout << "Enter the length of array 2:- ";
    cin >> l2;

    int a2[l2];

    for (int i = 0; i < l2; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> a2[i];
    }

    return 0;
}
