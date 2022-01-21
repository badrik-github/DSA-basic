/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Find the biggest number from the numeric string 

*/

#include <iostream>
#include <conio.h>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    string str = "53124";

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;

    return 0;
}