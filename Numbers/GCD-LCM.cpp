/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to Find the GCD and LCM of given two numbers; 

*/

#include <iostream>
using namespace std;

int Gcd(int a, int b)
{
    int num = min(a, b);

    int ans = 0;
    for (int i = num; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
    }
}

int Lcm(int a, int b)
{
    int num = max(a, b);
    // int ans = 0;
    int i = num;
    while (i % a != 0 || i % b != 0)
    {
        i++;
    }

    return i;
}

int main()
{

    int a, b;
    cout << "Enter a:- ";
    cin >> a;

    cout << "Enter b:- ";
    cin >> b;

    cout << "The LCM of Number pair (" << a << "," << b << ") is " << Lcm(a, b) << " And Gcd is " << Gcd(a, b);

    return 0;
}
