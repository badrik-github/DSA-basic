/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to find the Fibonacci number at index n ; 

*/

#include <iostream>
using namespace std;

int Fibonacci(int n)
{

    if (n == 0 || n == 1)
    {
        return n;
    }

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int num;
    cout << "Enter the number:-" << endl;
    cin >> num;

    int ans = Fibonacci(num);

    cout << "element is :-" << ans;

    return 0;
}
