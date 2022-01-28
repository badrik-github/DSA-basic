/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- the subsequence with sum k; 

*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void SubSequence(int n, vector<int> v1, int arr[], int len, int k, int sum)
{
    if (n >= len)
    {
        if (sum == k)
        {
            for (int i = 0; i < v1.size(); i++)
            {
                cout << v1[i] << "->";
            }
            cout << endl;
        }
        return;
    }

    sum += arr[n];
    v1.push_back(arr[n]);
    SubSequence(n + 1, v1, arr, len, k, sum);

    sum -= arr[n];
    // v1.pop_back(arr[n]);
    v1.pop_back();
    SubSequence(n + 1, v1, arr, len, k, sum);
}

int main()
{

    vector<int> v1;

    int k;
    cout << "Enter the number you want to find";
    cin >> k;

    int arr[3] = {3, 2, 1};

    int sum = 0;
    SubSequence(0, v1, arr, 3, k, sum);

    return 0;
}
