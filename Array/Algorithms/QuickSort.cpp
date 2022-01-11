/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Question:- Write a program to sort a array using Merge sort; 

*/
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void quickSort(int arr[], int first, int last)
{

    if (first < last)
    {

        int i = first;
        int j = last;
        int piv = first;

        while (i < j)
        {

            while (arr[i] <= arr[piv] && i < last)
            {

                i++;
            }

            while (arr[j] > arr[piv])
            {

                j--;
            }

            if (i < j)
            {
                swap(&arr[i], &arr[j]);
            }
        }

        swap(&arr[piv], &arr[j]);
        quickSort(arr, 0, j - 1);
        quickSort(arr, j + 1, last);
    }
}

int main()
{

    int arrayLength;

    cout << "Enter array length" << endl;
    cin >> arrayLength;

    int arr[arrayLength];

    for (int j = 0; j < arrayLength; j++)
    {

        cout << "Enter " << j << " element" << endl;

        cin >> arr[j];
    }

    quickSort(arr, 0, (arrayLength - 1));

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}