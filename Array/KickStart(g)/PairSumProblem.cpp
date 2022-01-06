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

bool TwoPointer(int arr[], int len, int key)
{
    int low = 0;
    int high = len - 1;
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = arr[high] + arr[low];
        if (sum == key)
        {
            return true;
        }
        else if (sum > key)
        {
            high--;
        }
        else
        {
            low++;
        }
    }

    return false;
}

//this is good but a better soultion to this is two pointer
int BinarySearch(int arr[], int len, int key)
{
    int i = 0;
    int j = len;

    while (i <= j)
    {
        int mid = (i + j) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }

    return -1;
}

bool pairSum(int arr[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        int temp = key - arr[i];
        int found = BinarySearch(arr, len, temp);

        if (found == -1)
        {
            continue;
        }
        else if (arr[found] + arr[i] == key)
        {
            cout << arr[found] << " + " << arr[i];
            return true;
            break;
        }
        else
        {
            continue;
        }
    }

    return false;
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

    bool ans = TwoPointer(arr, arrayLength, key);

    cout << ans;

    return 0;
}
