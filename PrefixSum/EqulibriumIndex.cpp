// # Interview Que => Direct-i

// Given with an array of N elements. Find array of equilibrium
// index arr[-7 1 5 2 -4 3 0]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int equlibriumIndex(int arr[], int n, int ps[])
{
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    int rightSum, leftSum;
    for (int i = 1; i <= n - 2; i++)
    {
        leftSum = ps[i - 1];
        rightSum = ps[n - 1] - ps[i];
        if (leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
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
    int ps[n];
    int Index = equlibriumIndex(arr, n, ps);
    cout << "Equlibrium Index is " << Index << endl;
    return 0;
}