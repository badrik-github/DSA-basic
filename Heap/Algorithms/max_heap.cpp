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

void deleteElement(vector<int> &arr)
{
    swap(arr[0], arr[arr.size() - 1]);

    arr.pop_back();

    Heapify(arr, 0);
}

void BottomUpHeapify(vector<int> &arr, int index)
{
    int parent = (index - 1) / 2;

    if (arr[parent] < arr[index] && parent >= 0)
    {
        swap(&arr[parent], &arr[index]);
        BottomUpHeapify(arr, parent);
    }

    return;
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

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }
    cout << endl;

    deleteElement(arr);

    cout << "after deleting" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }

    int newElement;
    cout << endl;
    cout << "Enter the element you want to insert";
    cin >> newElement;

    arr.push_back(newElement);

    BottomUpHeapify(arr, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "->";
    }

    return 0;
}
