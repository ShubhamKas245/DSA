
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int kthMinimum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minVal = INT_MAX;
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < minVal)
            {
                minVal = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
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
    int KthMin = kthMinimum(arr, n);
    cout << "Selection sort Algo" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}