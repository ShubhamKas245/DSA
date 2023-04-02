// Find the contigous non-empty sub array within an array,A of length N
// with the largest sum
// arr[1 2 3 4 -10] o/p=10  arr[-2 1 -3 4 -1 2 1 -5 4] o/p=6

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Using Kadane Algorithm
void MaxSum(int arr[], int n)
{
    int CurrSum = 0, MxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        CurrSum += arr[i];
        MxSum = max(MxSum, CurrSum);
        CurrSum = max(CurrSum, 0);
    }

    cout << MxSum << endl;
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
    cout << "Maximum Sub Array sum is ";
    MaxSum(arr, n);
    return 0;
}
