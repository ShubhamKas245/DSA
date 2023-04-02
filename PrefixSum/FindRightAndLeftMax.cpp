// Given an array Size N. Return 2 array leftMax & RightMax
// arr[-3 6 2 4 7 2 8 -9 3 1]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void leftOrRightMax(int arr[], int n, int LM[], int RM[])
{
    LM[0] = arr[0];
    RM[n - 1] = arr[n - 1];

    for (int i = 1; i < n; i++)
    {
        LM[i] = max(LM[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        RM[i] = max(RM[i + 1], arr[i]);
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
    int LM[n], RM[n];

    leftOrRightMax(arr, n, LM, RM);

    cout << "Left maximum array: ";
    for (int i = 0; i < n; i++)
    {
        cout << LM[i] << " ";
    }
    cout << endl;

    cout << "Right maximum array: ";
    for (int i = 0; i < n; i++)
    {
        cout << RM[i] << " ";
    }
    cout << endl;

    return 0;
}