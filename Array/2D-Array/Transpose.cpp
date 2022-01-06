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
            -cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
