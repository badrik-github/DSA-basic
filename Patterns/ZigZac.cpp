/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to print a ZigZac Pattern of stars using number of stars defined by user and rows are always 3 only; 


time complexity : O(n2)
space complexity : O(1)

*/

#include <iostream>
using namespace std;

int main()
{

    int stars;
    cout << "Enter number of Stars" << endl;
    cin >> stars;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= stars; j++)
        {

            if ((i + j) % 4 == 0 || (i % 2 == 0 && j % 2 == 0))
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << "\n";
    }

    return 0;
}
