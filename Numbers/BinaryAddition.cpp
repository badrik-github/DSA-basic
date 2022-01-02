/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to perform Binary Addition between two binary numbers; 

*/

#include <iostream>
using namespace std;

string BinaryAddition(int a, int b)
{
    int cary = 0;
    string ans = "";
    int result;

    while (a > 0 || b > 0)
    {
        int lastDigitA = a % 10;
        int lastDigitB = b % 10;

        if (cary == 0)
        {
            if (lastDigitA == 0 && lastDigitB == 0)
            {
                result = 0;
                cary = 0;
            }
            else if (lastDigitA == 1 && lastDigitB == 1)
            {
                result = 0;
                cary = 1;
            }
            else
            {
                result = 1;
                cary = 0;
            }
        }
        else
        {
            if (lastDigitA == 0 && lastDigitB == 0)
            {
                result = 1;
                cary = 0;
            }
            else if (lastDigitA == 1 && lastDigitB == 1)
            {
                result = 1;
                cary = 1;
            }
            else
            {
                result = 0;
                cary = 1;
            }
        }
        a = a / 10;
        b = b / 10;

        // ans = (ans * 10) + result;

        ans = to_string(result) + ans;

        if (a == 0 && b == 0)
        {
            ans = to_string(cary) + ans;

            // ans = (ans * 10) + cary;
        }

        // cout << ans << endl;
    }

    return ans;
}

int main()
{

    int a, b;
    cout << "Enter a in binary format:-";
    cin >> a;

    cout << "Enter b in binary format:-";
    cin >> b;

    string result = BinaryAddition(a, b);
    // cout << result;

    cout << "After Performing Binary Addition the result is:- " << result;

    return 0;
}
