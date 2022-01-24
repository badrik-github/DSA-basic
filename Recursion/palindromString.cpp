/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to check a string is palindrom or not using recursion ; 

*/

#include <iostream>
using namespace std;

bool Palindrom(string s, int i, int j)
{
    if (j <= i)
    {
        return true;
    }
    else if (s[i] == s[j])
    {
        return Palindrom(s, i + 1, j - 1);
    }
    else
    {
        return false;
    }
}

int main()
{

    string s = "b";

    bool x = Palindrom(s, 0, (s.length() - 1));

    cout << x;

    return 0;
}
