/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to print a Rectangle of stars using number of user defined rows and columns; 

time complexity : O(n2)
space complexity : O(1)

*/

#include <iostream>
using namespace std;

int main()
{

    int rows, columns;

    cout << "Enter number of rows" << endl;
    cin >> rows;

    cout << "Enter number of columns" << endl;
    cin >> columns;

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }

    return 0;
}