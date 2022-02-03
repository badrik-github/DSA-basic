/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given an integer array nums that may contain duplicates, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
 

Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Combination2(int index, vector<int> arr, vector<int> ds, vector<vector<int>> &ans)
{
    if (index >= arr.size())
    {
        ans.push_back(ds);
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[index] == arr[index - 1])
            continue;

        ds.push_back(arr[i]);
        Combination2(i + 1, arr, ds, ans);
        ds.pop_back();
    }
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

    int target;

    vector<vector<int>> ans;
    vector<int> ds;

    Combination2(0, arr, ds, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << "->";
        }
        cout << endl;
    }

    return 0;
}