// Given an integer array A Containing N distinct integers,You have to find
// all the leaders in Array A.
// An element is a leader if it strictly greater than all the elements to its right side
// Note => The rightMost element is always a leader
// arr[16 17 4 3 5 2]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leadersOfArray(int arr[], int n)
{
    int MaxVal = arr[n - 1];
    int cnt = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > MaxVal)
        {
            MaxVal = arr[i];
            cnt++;
            cout << MaxVal << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Leaders of Array is: ";
    leadersOfArray(arr, n);

    return 0;
}