/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

Constraints
1 <= N,M <= 1,000
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

    int key;
    cout << "enter the key element";
    cin >> key;
    int flag = 0;
    int i = 0;
    int j = c1 - 1;
    int count = 0;

    while (flag == 0 && count < r1 * c1)
    {

        if (key > first[i][j])
        {
            i++;
        }
        else if (key < first[i][j])
        {
            j--;
        }
        else
        {
            cout << "element found at" << i << " " << j << endl;
            cout << first[i][j];
            flag = 1;
        }

        count++;
    }

    return 0;
}
