/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find factorial of the given number; 

*/

#include <iostream>
using namespace std;

int factorial(int number);

int main()
{

    int number;
    cout << "Enter the number you want to find Factorial for:-";
    cin >> number;

    int result = factorial(number);

    cout << "The Factorail of Number " << number << " is:- " << result;

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