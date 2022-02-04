/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.



Example 1:


Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
Example 2:

Input: n = 1
Output: [["Q"]]


Constraints:

1 <= n <= 9


Question :- https://leetcode.com/problems/n-queens/
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

bool isSafe(int row, int col, vector<string> board, int n)
{
    int duplirow = row;
    int duplicol = col;

    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        row--;
        col--;
    }

    row = duplirow;
    col = duplicol;

    while (col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;
        col--;
    }

    row = duplirow;
    col = duplicol;

    while (row < n && col >= 0)
    {
        if (board[row][col] == 'Q')
            return false;

        row++;
        col--;
    }

    return true;
}

void Queen(int col, int n, vector<vector<string>> &ans, vector<string> board)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            cout << "true";
            board[row][col] = 'Q';
            Queen(col + 1, n, ans, board);
            board[row][col] = '.';
        }
    }
}

int main()
{
    int n;
    cout << "Enter n";
    cin >> n;

    vector<vector<string>> ans;
    vector<string> board(n);

    string s(n, '.');

    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }

    Queen(0, n, ans, board);

    cout << ans.size();

    cout << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "chess board " << i + 1 << " is" << endl;
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}