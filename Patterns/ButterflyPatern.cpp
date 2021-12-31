/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to print a Butterfly Pattern of stars using number of user defined rows; 


time complexity : O(n2)
space complexity : O(1)

*/

#include <iostream>
using namespace std;

int main()
{

    int rows;
    int columns;
    cout << "Enter number of rows" << endl;
    cin >> rows;
    columns = rows * 2;

    for (int i = 1; i <= rows; i++)
    {

        for (int j = 1; j <= columns; j++)
        {
            if (j <= i)
            {
                cout << " * ";
            }
            else if (j <= (columns - i))
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << "\n";
    }

    for (int i = rows; i >= 1; i--)
    {

        for (int j = 1; j <= columns; j++)
        {
            if (j <= i)
            {
                cout << " * ";
            }
            else if (j <= (columns - i))
            {
                cout << "   ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << "\n";
    }

    return 0;
}
