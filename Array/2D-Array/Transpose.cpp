/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints
1 <= N <= 1000
*/

#include <iostream>
using namespace std;

int main()
{

    int m;
    cout << "Enter no of rows and columns:- ";
    cin >> m;

    int arr[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
