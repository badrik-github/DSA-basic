/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find Fibonacci of the given number; 

*/

#include <iostream>
using namespace std;

int main()
{

    int length;
    cout << "Enter the length of Fibonacci series you want to find :-";
    cin >> length;

    int a = 0;
    int b = 1;
    int c;

    cout << a << "->" << b << "->";
    for (int i = 1; i <= (length - 2); i++)
    {
        c = a + b;
        cout << c << "->";
        a = b;
        b = c;
    }

    return 0;
}
