/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
write a program which returns true if the pair exists in the array who's sum is equal to the given key

array = 5,7,19,70,22,14
key =13

ans = true // there is pair 5,7

*/

#include <iostream>
using namespace std;

bool pair(int arr[], int len, int key)
{
}

int main()
{

    int arrayLength;
    cout << "Enter the length of array:- ";
    cin >> arrayLength;

    int arr[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> arr[i];
    }

    int key;
    cout << "enter key you want to find";
    cin >> key;

    bool ans = pair(arr, arrayLength, key);

    return 0;
}
