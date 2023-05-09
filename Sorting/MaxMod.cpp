#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxMod(int arr[], int n)
{
    int ans = 0;
    int max1 = arr[0], max2 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2)
        {
            max2 = arr[i];
        }
    }
    ans = max2 % max1;
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
    int maxModd = maxMod(arr, n);
    cout << "Max Mod : " << maxModd << endl;
    return 0;
}