// Given an array of size N. find & return the max sum of any sub-array
// arr=[-2 3 4 -1 5 -10 7]
// Google,facebook,direct-i,Ajio,linked-in => Interview Ques

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Using Kadane's Algorithm

int MaxSum(int arr[], int n)
{
    int currSum = arr[0], Max_Sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (currSum < 0)
        {
            currSum = 0;
        }
        currSum = currSum + arr[i];
        Max_Sum = max(Max_Sum, currSum);
    }
    return Max_Sum;
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
    int MaxiMumSum = MaxSum(arr, n);
    cout << "Maximum subarray sum is :" << MaxiMumSum << endl;

    return 0;
}