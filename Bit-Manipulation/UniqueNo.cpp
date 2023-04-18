// Given N array elements every elements repeats twice concept.
// Find Unique Number
// arr[5] =[6 9 6 10 9 ]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int uniqueNo(int arr[], int n)
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
    int uniqueNum = uniqueNo(arr, n);
    cout << "Uniuqe No is " << uniqueNum << endl;
    return 0;
}