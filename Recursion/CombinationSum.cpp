/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
 

Constraints:

1 <= candidates.length <= 30
1 <= candidates[i] <= 200
All elements of candidates are distinct.
1 <= target <= 500
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void CombinationA(int index, int sum, vector<int> output, int arr[], int length)
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
    CombinationA(index, sum, output, arr, length);

    sum += arr[index];
    output.pop_back();
    CombinationA(index + 1, sum, output, arr, length);
}

int main()
{
    int arr[4] = {2, 6, 3, 7};
    int k = 7;
    vector<int> v1;

    CombinationA(0, 7, v1, arr, 4);

    return 0;
}