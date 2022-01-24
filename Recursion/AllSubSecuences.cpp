/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find the all possible subsequence of an array; 

arr = [3,2,1]

ans = [3],[3,2],[3,2,1],[3,1],[2],[2,1],[1],[]

*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void SubSequence(int n, vector<int> v1, int arr[], int len)
{
    if (n >= len)
    {
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << "->";
        cout << endl;
        return;
    }

    v1.push_back(arr[n]);
    SubSequence(n + 1, v1, arr, len);

    // v1.pop_back(arr[n]);
    v1.pop_back();
    SubSequence(n + 1, v1, arr, len);
}

int main()
{

    vector<int> v1;

    int arr[3] = {3, 2, 1};

    SubSequence(0, v1, arr, 3);

    return 0;
}
