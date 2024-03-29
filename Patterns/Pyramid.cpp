/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to print a Prymid Pattern of stars using number of user defined rows; 


time complexity : O(n2)
space complexity : O(1)

*/

#include <iostream>
using namespace std;

int main()
{

    int rows;
    cout << "Enter number of rows" << endl;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        int count = 1;
        for (int j = 1; j <= (rows - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }

    return 0;
}
