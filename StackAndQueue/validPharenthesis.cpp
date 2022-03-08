/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.


Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false


Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/

#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
    stack<char> stack;
    string brackets;
    cout << "enter the parenthesis";
    cin >> brackets;

    int flag = 0;
    for (int i = 0; i < brackets.length(); i++)
    {
        if (brackets[i] != '}' && brackets[i] != ']' && brackets[i] != ')' && brackets[i] != '(' && brackets[i] != '[' && brackets[i] != '{')
        {
            flag = 1;
            cout << "false" << endl;
            break;
        }

        if (brackets[i] == '{' || brackets[i] == '[' || brackets[i] == '(')
        {
            stack.push(brackets[i]);
        }

        else
        {
            if ((stack.top() == '{' && brackets[i] == '}') || (stack.top() == '[' && brackets[i] == ']') || (stack.top() == '(' && brackets[i] == ')'))
            {
                stack.pop();
            }
            else
            {
                flag = 1;
                cout << "false" << endl;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "true" << endl;
    }
    return 0;
}