/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Heapify the array into max_heap and min_heap
*/

#include <iostream>
#include <vector>
using namespace std;

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

void Heapify(vector<int> &arr, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (arr[l] > arr[largest] && l < arr.size())
    {
        largest = l;
    }

    if (arr[r] > arr[largest] && r < arr.size())
    {
        largest = r;
    }

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        Heapify(arr, largest);
    }
}

void heapSortHeapify(vector<int> &arr, int start, int end)
{
    int largest = start;
    int l = 2 * start + 1;
    int r = 2 * start + 2;

    if (arr[l] > arr[largest] && l < arr.size() && l < end)
    {
        largest = l;
    }

    if (arr[r] > arr[largest] && r < arr.size() && r < end)
    {
        largest = r;
    }

    if (largest != start)
    {
        swap(&arr[start], &arr[largest]);
        heapSortHeapify(arr, largest, end);
    }
}

void heapSort(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;

    while (j > 0)
    {
        swap(&arr[i], &arr[j]);
        heapSortHeapify(arr, i, j);
        j--;
    }
}

int main()
{

    int arrayLength;
    cout << "Enter the length of array:- ";
    cin >> arrayLength;

    vector<int> arr;

    for (int i = 0; i < arrayLength; i++)
    {
        int temp;
        cout << "Element " << i << " :- ";
        cin >> temp;
        arr.push_back(temp);
    }
    cout << endl;

    // creating max_heap
    for (int i = arr.size() / 2 - 1; i >= 0; i--)
    {
        Heapify(arr, i);
    }

    cout << "max_heap" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }

    cout << endl;

    heapSort(arr);

    cout << "heap_sort" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }

    return 0;
}
