// Given An Array rotate K times
// 3 4 1 9 1 6 7 10

#include <iostream>
using namespace std;

void rightRotate(int arr[], int n, int k)
{
    k = k % n;

    for (int i = n - k; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n - k; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin >> k;
    rightRotate(arr, n, k);
   
    return 0;
}