/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to calculate nCr;

Formula for nCr = n!/((n-r)!*r!)

*/

#include <iostream>
using namespace std;

int factorial(int number);

int main()
{

    int n, r;
    cout << "Enter the value of n";
    cin >> n;

    cout << "Enter the value of r";
    cin >> r;

    if (n > r)
    {

        int result = factorial(n) / (factorial(n - r) * factorial(r));

        cout << "value of " << n << "C" << r << " is:- " << result;
    }
    else if (n == r)
    {
        cout << "value of " << n << "C" << r << " is:- " << 1;
    }
    else
    {
        cout << "Enter a valid combination";
    }

    return 0;
}

int factorial(int number)
{
    if (number > 1)
    {
        return (number)*factorial(number - 1);
    }
    else
    {
        return 1;
    }
}