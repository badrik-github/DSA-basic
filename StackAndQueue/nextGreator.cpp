/**
 * Project - DSA
 * Mission DSA
 * @author badrik-github
 * @since 0.1
 * @version 0.1
 */

/*
Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.



Example 1:

Input: nums = [1,2,1]
Output: [2,-1,2]
Explanation: The first 1's next greater number is 2;
The number 2 can't find next greater number.
The second 1's next greater number needs to search circularly, which is also 2.
Example 2:

Input: nums = [1,2,3,4,3]
Output: [2,3,4,-1,4]


Constraints:

1 <= nums.length <= 104
-109 <= nums[i] <= 109

*/

#include <iostream>
#include <stack>
#include <cstdio>
using namespace std;

int main()
{
    stack<int> stack;
    int length;
    cout << "enter the length of array";
    cin >> length;

    int arr[length];

    int ans[length];

    for (int i = 0; i < length; i++)
    {
        cout << "Element " << i << " :- ";
        cin >> arr[i];
        // stack.push(arr[i]);
    }

    for (int i = (length - 1); i >= 0; i--)
    {
        stack.push(arr[i]);
    }

    for (int i = length - 1; i >= 0; i--)
    {

        if (arr[i] < stack.top())
        {
            ans[i] = stack.top();
            stack.push(arr[i]);
        }

        else
        {
            while (arr[i] >= stack.top())
            {
                stack.pop();
                if (stack.empty())
                {
                    ans[i] = -1;
                    stack.push(arr[i]);
                    break;
                }
            }

            if (arr[i] < stack.top())
            {
                ans[i] = stack.top();
                stack.push(arr[i]);
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << ans[i] << "->";
    }

    return 0;
}

// int main()
// {
//     stack<int> stack;
//     int length;
//     cout << "enter the length of array";
//     cin >> length;

//     int arr[length];

//     int ans[length];

//     for (int i = 0; i < length; i++)
//     {
//         cout << "Element " << i << " :- ";
//         cin >> arr[i];
//     }

//     for (int i = length - 1; i >= 0; i--)
//     {
//         if (i == (length - 1))
//         {
//             ans[i] = -1;
//             stack.push(arr[i]);
//         }

//         else
//         {
//             if (arr[i] < stack.top())
//             {
//                 ans[i] = stack.top();
//                 stack.push(arr[i]);
//             }
//             else
//             {
//                 while (arr[i] >= stack.top())
//                 {
//                     stack.pop();
//                     if (stack.empty())
//                     {
//                         ans[i] = -1;
//                         stack.push(arr[i]);
//                         break;
//                     }
//                 }
//                 if (arr[i] < stack.top())
//                 {
//                     ans[i] = stack.top();
//                     stack.push(arr[i]);
//                 }
//             }
//         }
//     }

//     for (int i = 0; i < length; i++)
//     {
//         cout << ans[i] << "->";
//     }

//     return 0;
// }