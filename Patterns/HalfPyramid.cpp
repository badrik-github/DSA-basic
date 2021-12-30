/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to print a Half Pyramid of stars using number of user defined rows; 

      *
    * *
  * * *
* * * *

time complexity : O(n2)
space complexity : O(1)

*/

#include <iostream>
using namespace std;

void flyods(int rows);

int main()
{

    int rows;

    cout << "Enter number of rows" << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if ((i + j) <= rows)
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

    flyods(rows);

    return 0;
}

void flyods(int rows)
{
    int counter = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if ((i + j) <= rows)
            {
                cout << "   ";
            }
            else
            {
                cout << " " << counter << " ";
                counter++;
            }
        }
        cout << "\n";
    }
}
