// Given an array of integer A. every element appears twice except for one
// Find that integer that occurs once.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int onceOccur(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
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
    int ans = onceOccur(arr, n);
    cout << "Element is : " << ans << endl;
    return 0;
}