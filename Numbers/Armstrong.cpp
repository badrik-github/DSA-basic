/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find a number is Armstrong or not;

*/

#include <iostream>
#include <math.h>
using namespace std;

int armstrong(int number);

int main()
{

    int number;
    cout << "Enter the number you want to check:-";
    cin >> number;

    int lastNumber = armstrong(number);

    if (lastNumber == number)
    {
        cout << number << " Is a Armstrong Number";
    }
    else
    {
        cout << number << " Is not a Armstrong Number";
    }
}

int armstrong(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int last = number % 10;
        sum += pow(last, 3);
        number = number / 10;
    }

    return sum;
}