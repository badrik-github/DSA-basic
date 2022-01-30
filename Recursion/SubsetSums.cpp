/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given a list arr of N integers, print sums of all subsets in it.

Note: Return all the element is increasing order.

Example 1:

Input:
N = 2
arr[] = {2, 3}
Output:
0 2 3 5
Explanation:
When no elements is taken then Sum = 0.
When only 2 is taken then Sum = 2.
When only 3 is taken then Sum = 3.
When element 2 and 3 are taken then 
Sum = 2+3 = 5.
Example 2:

Input:
N = 3
arr = {5, 2, 1}
Output:
0 1 2 3 5 6 7 8
Your Task:  
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer N as an input parameter and return the list/vector of all the subset sums.

Expected Time Complexity: O(2N)
Expected Auxiliary Space: O(2N)

Constraints:
1 <= N <= 15
0 <= arr[i] <= 104
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void findSubsetSum(int length, vector<int> arr, vector<int> &ans, int sum, int index)
{
    if (index >= length)
    {
        ans.push_back(sum);
        return;
    }

    findSubsetSum(length, arr, ans, sum + arr[index], index + 1);

    findSubsetSum(length, arr, ans, sum, index + 1);
}

int main()
{
    vector<int> arr;
    int length;
    cout << "Enter Length";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    vector<int> ds;
    int sum = 0;
    int index = 0;

    findSubsetSum(length, arr, ds, sum, index);

    for (int j = 0; j < ds.size(); j++)
    {
        cout << ds[j] << "->";
    }

    return 0;
}