/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*

Problem
Josh is given the number of visitors at her local theme park on N consecutive
days. The number of visitors on the i-th day is Vi. A day is record breaking if it


satisfies both of the following conditions:

● The number of visitors on the day is strictly larger than the number of
visitors on each of the previous days.

● Either it is the last day, or the number of visitors on the day is strictly larger
than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Josh find out the number of record breaking days.


Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.
Constraints
Time limit: 20 seconds per test set.
Memory limit: 1GB.

1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 10^5.

Test set 1
1 ≤ N ≤ 1000.

Test set 2
1 ≤ N ≤ 2 × 10^5 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.

Solution
Constraints Analysis

1 sec = 10^8 operations
20 sec = 2 * 10^9 operations
*/

#include <iostream>
using namespace std;

void RecordBreaking(int arr[], int len)
{

    int maxPeople = 0;
    int j = 0;

    while (j < len)
    {
        if (arr[j] > arr[j + 1] && arr[j] > maxPeople)
        {
            cout << "A Record Breaking Day Found at index:- " << j << endl;
            maxPeople = arr[j];
        }

        j++;
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

    RecordBreaking(arr, arrayLength);

    return 0;
}
