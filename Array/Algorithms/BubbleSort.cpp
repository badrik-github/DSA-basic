/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to sort a array using bubble sort ; 

*/

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int len)
{
    for (int i = 0; i < (len - 1); i++)
    {
        for (int j = 0; j < (len - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ->";
    }
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

    BubbleSort(arr, arrayLength);

    return 0;
}
