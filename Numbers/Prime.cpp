/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to check given number is prime or not; 


*/

#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter the number you want to check:-";
    cin >> number;

    int count = 0;

    if (number > 2)
    {
        for (int i = 2; i <= (number / 2); i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            cout << number << " is a prime number.";
        }
        else
        {
            cout << number << " is not a prime number.";
        }
    }
    else
    {
        cout << number << " is not a prime number.";
    }

    return 0;
}
