/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to check given number is prime or not; 

- sieve of eratosthenes is the algorithm used to find the prime number between a range of number
    it works on a principle of marking all the multiples in an array

*/

#include <iostream>
using namespace std;

void spf()
{
    int num;
    cout << "Enter the number you want to find spf for";
    cin >> num;

    int arr[num + 1] = {0};
    for (int i = 2; i <= num; i++)
    {
        int count = 0;
        if (arr[i] == 0)
        {
            arr[i] = i;
        }
        while (i * (i + count) <= num && (i + count) <= num)
        {
            if (arr[i * (i + count)] == 0)
            {
                arr[i * (i + count)] = i;
            }

            count++;
        }
    }

    while (num > 1)
    {
        cout << arr[num] << " ";
        num = num / arr[num];
    }
}

void sieve()
{
    int num;
    cout << "enter the number till you want to find the primes";
    cin >> num;

    int arr[num + 1] = {0};

    for (int i = 2; i <= num; i++)
    {
        int count = 0;
        while (i * (i + count) < 50)
        {
            arr[i * (i + count)] = 1;
            count++;
        }
    }

    for (int i = 2; i <= num; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{

    // int number;
    // cout << "Enter the number you want to check:-";
    // cin >> number;

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

    //used to find all the prime numbers from 0 to any number
    sieve();

    //sieve is also used to find the  spf of a given number
    //spf stand for smallest prime factor
    spf();

    return 0;
}
