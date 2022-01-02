/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to perform all conversions listed below;

1. Binary to Decimal
2. Octal to Decimal
3. Hexadecimal to Decimal

4. Decimal to Binary
5. Decimal to Octal
6. Decimal to Hexadecimal

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int n)
{

    int result = 0;
    int temp = 1;

    while (n > 0)
    {
        int last = n % 10;
        result = result + (last * temp);
        n = n / 10;
        temp = temp * 2;
    }

    return result;
}

int OctalToDecimal(int n)
{

    int result = 0;
    int temp = 1;

    while (n > 0)
    {
        int last = n % 10;
        result = result + (last * temp);
        n = n / 10;
        temp = temp * 8;
    }

    return result;
}

int HexadecimalToDecimal(string s)
{

    int result = 0;
    int temp = 1;

    int length = s.size();

    for (int i = (length - 1); i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result = result + (temp * (s[i] - '0'));
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            result = result + (temp * ((s[i] - 'A') + 10));
        }

        temp = temp * 16;
    }

    return result;
}

int DecimalToBinary(int n)
{
    int x = 1;
    int result = 0;

    while (x < n)
    {
        x = x * 2;
    }

    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit * x;
        x /= 2;
        result = result * 10 + lastDigit;
    }

    return result;
}

int DecimalToOctal(int n)
{

    int x = 1;
    int result = 0;

    while (x < n)
    {
        x = x * 8;
    }

    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit * x;
        x /= 8;
        result = result * 10 + lastDigit;
    }

    return result;
}

string DecimalToHexadecimal(int n)
{

    int x = 1;
    string result = "";

    while (x < n)
    {
        x = x * 16;
    }

    while (x > 0)
    {
        int lastDigit = n / x;
        n = n - lastDigit * x;
        x /= 16;

        if (lastDigit <= 9)
        {
            result = result + to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            result = result + c;
        }
    }

    return result;
}

int main()
{
    int n;

    return 0;
}
