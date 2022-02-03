/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]

Constraints:

1 <= nums.length <= 6
-10 <= nums[i] <= 10
All the integers of nums are unique.

*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Permutations(vector<int> arr, vector<vector<int>> &ans, vector<int> ds, bool flag[])
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (!flag[i])
        {
            flag[i] = true;
            ds.push_back(arr[i]);
            Permutations(arr, ans, ds, flag);
            ds.pop_back();
            flag[i] = false;
        }
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Permutation2(vector<int> arr, vector<vector<int>> &ans, vector<int> ds, int index)
{
    if (ds.size() == arr.size())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        swap(arr[index], arr[i]);
        ds.push_back(arr[index]);
        Permutation2(arr, ans, ds, index + 1);
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

    vector<vector<int>> ans;
    vector<int> ds;

    bool flag[length] = {false};

    // Permutations(arr, ans, ds, flag);
    Permutation2(arr, ans, ds, 0);

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