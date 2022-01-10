/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Write a program to take an  2 user defined m * n matrix and perform martix multiplication
*/

#include <iostream>
using namespace std;

int main()
{
    //Taking first matrix as input
    int r1, c1;
    cout << "Enter no of rows in matrix 1:- ";
    cin >> r1;

    cout << "Enter no of columns in matrix 2:- ";
    cin >> c1;

    int first[r1][c1];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> first[i][j];
        }
        cout << "\n";
    }

    //Taking second matrix as input
    int r2, c2;
    cout << "Enter no of rows in matrix 2:- ";
    cin >> r2;

    cout << "Enter no of columns in matrix 2:- ";
    cin >> c2;

    int second[r2][c2];

    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> second[i][j];
        }
        cout << "\n";
    }

    //Multiplying it
    //to perform a multiplication of two matrix of m*n and x*y.
    //it should satisfy the condition (n == x).
    //and the result should be m * y.

    if (c1 != r2)
    {
        cout << "invalid matrix";
        return 0;
    }

    int result[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
        }
        cout << "\n";
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int z = 0; z < r2; z++)
            {
                result[i][j] += first[i][z] * second[z][j];
            }
        }
    }

    cout << "matrix after multiplication is" << endl;

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
