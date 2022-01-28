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

void Combination(int index, int sum, vector<int> output, int arr[], int length)
{
    if (sum == 0)
    {
        for (int i = 0; i < output.size(); i++)
        {
            cout << output[i] << "->";
        }
        cout << endl;
        return;
    }

    if (index > length || sum < 0)
    {
        return;
    }

    output.push_back(arr[index]);
    sum -= arr[index];
    Combination(index + 1, sum, output, arr, length);

    sum += arr[index];
    output.pop_back();
    Combination(index + 1, sum, output, arr, length);
}

int main()
{
    int arr[7] = {10, 1, 2, 7, 6, 1, 5};
    int k = 8;
    vector<int> v1;

    Combination(0, k, v1, arr, 7);

    return 0;
}