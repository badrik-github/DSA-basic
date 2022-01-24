/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find sum of number till  n;

*/

#include <iostream>
#include <math.h>
using namespace std;

int sum(int n)
{

    if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}

int main()
{

    int number;
    cout << "Enter the number :-";
    cin >> number;

    cout << sum(number);
}
