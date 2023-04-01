// Find the max subArray sum of length k
// -3 4 -2 5 3 -2 8 2 -1 4

#include <iostream>
using namespace std;

// Time Complexity O(n^2)
void maxSum(int arr[], int n, int k)
{
    int maxiNum = 0;
    for (int i = 0; i <= n - k; i++)
    {
        int s = i;
        int e = i + k - 1;
        int sum = 0;
        for (int j = s; j <= e; j++)
        {
            sum += arr[j];
        }
        if (sum > maxiNum)
        {
            maxiNum = sum;
        }
    }
    cout << maxiNum << endl;
}

// we can improve our time complexity using sliding window Technique O(n)
void maxSums(int arr[], int n, int k)
{
    int sum = 0, MxNum;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    MxNum = sum;
    for (int i = 1; i <= n - k; i++)
    {
        sum += arr[i + k - 1] - arr[i - 1];
        if (sum > MxNum)
        {
            MxNum = sum;
        }
    }
    cout << MxNum << endl;
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    cout << "Maximum Sub Array sum is ";
    maxSums(arr, n, k);
    return 0;
}