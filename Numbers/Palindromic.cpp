/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find a number is Palindromic or not;

*/

#include <iostream>
using namespace std;

int reverse(int number);

int main()
{

    int number;
    cout << "Enter the number you want to check:-";
    cin >> number;

    int reverseNumber = reverse(number);

    if (reverseNumber == number)
    {
        cout << number << " Is a Palindromic Number";
    }
    else
    {
        cout << number << " Is not a Palindromic Number";
    }

    return 0;
}

int reverse(int number)
{
    int sum = 0;
    while (number > 0)
    {
        int last = number % 10;
        sum = (sum * 10) + last;
        number = number / 10;
    }

    return sum;
}