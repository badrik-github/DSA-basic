/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]
 

Constraints:

1 <= candidates.length <= 100
1 <= candidates[i] <= 50
1 <= target <= 30
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void Combination(int index, int target, vector<int> arr, vector<int> ds, vector<vector<int>> &ans)
{

    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    if (index >= arr.size() || target < 0)
    {
        return;
    }

    ds.push_back(arr[index]);
    Combination(index + 1, target - arr[index], arr, ds, ans);
    ds.pop_back();

    Combination(index + 1, target, arr, ds, ans);
}

void Combination2(int index, int target, vector<int> arr, vector<int> ds, vector<vector<int>> &ans)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }

    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
            continue;

        if (arr[i] > target)
            break;

        ds.push_back(arr[i]);
        Combination2(i + 1, target - arr[i], arr, ds, ans);
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

    cout << "Enter the Target";
    cin >> target;

    vector<vector<int>> ans;
    vector<int> ds;

    Combination2(0, target, arr, ds, ans);

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