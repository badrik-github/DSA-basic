/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Write a program to take an user defined square matrix of size N and print it Transpose
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
