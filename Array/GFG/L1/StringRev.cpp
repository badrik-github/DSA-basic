/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
*/

#include <iostream>
#include <string>
using namespace std;

string stringRev(string str)
{
    int i = 0;
    int j = str.length() - 1;
    while (i < j)
    {
        char temp;

        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    return str;
}

int main()
{

    string inputString;

    cin >> inputString;

    string ans = stringRev(inputString);

    cout << "Reverse String is:- " << ans;

    return 0;
}
