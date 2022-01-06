/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Write a program to take an user defined m * n matrix and print it in spiral order
*/

#include <iostream>
using namespace std;

int main()
{

    int m, n;
    cout << "Enter no of rows:- ";
    cin >> m;

    cout << "Enter no of columns:- ";
    cin >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << "\n";
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    int start_row = 0;
    int start_columns = 0;
    int end_rows = m - 1;
    int end_columns = n - 1;

    while (start_row <= end_rows || start_columns <= end_columns)
    {

        for (int i = start_columns; i <= end_columns; i++)
        {
            cout << arr[start_row][i] << " ->";
        }

        start_row++;

        for (int i = start_row; i <= end_rows; i++)
        {
            cout << arr[i][end_columns] << " ->";
        }

        end_columns--;

        for (int i = end_columns; i >= start_columns; i--)
        {
            cout << arr[end_rows][i] << " ->";
        }

        end_rows--;

        for (int i = end_rows; i >= start_row; i--)
        {
            cout << arr[i][start_columns] << " ->";
        }

        start_columns++;
    }

    return 0;
}
