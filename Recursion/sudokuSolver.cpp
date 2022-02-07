/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Write a program to solve a Sudoku puzzle by filling the empty cells.

A sudoku solution must satisfy all of the following rules:

Each of the digits 1-9 must occur exactly once in each row.
Each of the digits 1-9 must occur exactly once in each column.
Each of the digits 1-9 must occur exactly once in each of the 9 3x3 sub-boxes of the grid.
The '.' character indicates empty cells.



Example 1:


Input: board = [[5,3,0,0,7,0,0,0,0],[6,0,0,1,9,5,0,0,0],[0,9,8,0,0,0,0,6,0],[8,0,0,0,6,0,0,0,3],[4,0,0,8,0,3,0,0,1],[7,0,0,0,2,0,0,0,6],[0,6,0,0,0,0,2,8,0],[0,0,0,4,1,9,0,0,5],[0,0,0,0,8,0,0,7,9]]
Output: [[5,3,4,6,7,8,9,1,2],[6,7,2,1,9,5,3,4,8],[1,9,8,3,4,2,5,6,7],[8,5,9,7,6,1,4,2,3],[4,2,6,8,5,3,7,9,1],[7,1,3,9,2,4,8,5,6],[9,6,1,5,3,7,2,8,4],[2,8,7,4,1,9,6,3,5],[3,4,5,2,8,6,1,7,9]]
Explanation: The input board is shown above and the only valid solution is shown below:




Constraints:

board.length == 9
board[i].length == 9
board[i][j] is a digit or 0.
0 represents a empty location
It is guaranteed that the input board has only one solution.
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// bool isSafe(vector<vector<int>> board, int row, int col, char num)
// {
//     int duplicateRow = row;
//     int duplicateColumn = col;

//     for (int i = 0; i < 9; i++)
//     {
//         if (board[i][col] == num)
//             return false;
//     }

//     row = duplicateRow;
//     col = duplicateColumn;

//     for (int i = 0; i < 9; i++)
//     {
//         if (board[row][i] == num)
//             return false;
//     }

//     row = duplicateRow;
//     col = duplicateColumn;

//     int matrixRowStart = (row / 3) * 3;
//     int matrixRowEnd = matrixRowStart + 2;

//     int matrixColStart = (col / 3) * 3;
//     int matrixColEnd = matrixColStart + 2;

//     for (int i = matrixRowStart; i <= matrixRowEnd; i++)
//     {
//         for (int j = matrixColStart; j <= matrixColEnd; j++)
//         {
//             if (board[i][j] == num)
//                 return false;
//         }
//     }

//     return true;
// }

bool isSafe(vector<vector<int>> board, int row, int col, char num)
{
    int duplicateRow = row;
    int duplicateColumn = col;

    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == num)
            return false;

        if (board[row][i] == num)
            return false;
    }

    row = duplicateRow;
    col = duplicateColumn;

    int matrixRowStart = (row / 3) * 3;
    int matrixRowEnd = matrixRowStart + 2;

    int matrixColStart = (col / 3) * 3;
    int matrixColEnd = matrixColStart + 2;

    for (int i = matrixRowStart; i <= matrixRowEnd; i++)
    {
        for (int j = matrixColStart; j <= matrixColEnd; j++)
        {
            if (board[i][j] == num)
                return false;
        }
    }

    return true;
}

bool Sudoku(vector<vector<int>> &board)
{

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == 0)
            {
                for (int z = 1; z <= 9; z++)
                {
                    if (isSafe(board, i, j, z))
                    {
                        board[i][j] = z;

                        if (Sudoku(board))
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = 0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{

    vector<vector<int>> board{{5, 3, 0, 0, 7, 0, 0, 0, 0}, {6, 0, 0, 1, 9, 5, 0, 0, 0}, {0, 9, 8, 0, 0, 0, 0, 6, 0}, {8, 0, 0, 0, 6, 0, 0, 0, 3}, {4, 0, 0, 8, 0, 3, 0, 0, 1}, {7, 0, 0, 0, 2, 0, 0, 0, 6}, {0, 6, 0, 0, 0, 0, 2, 8, 0}, {0, 0, 0, 4, 1, 9, 0, 0, 5}, {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    Sudoku(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}