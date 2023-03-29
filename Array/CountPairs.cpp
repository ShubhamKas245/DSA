// Array Size N.count no of pairs (i,j) such that arr[i] +arr[j]==K
// (i!=j) (i<j)  arr=[3 -2 1 4 3 6 8]

#include <iostream>
using namespace std;

int possiblePairs(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    return count;
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
    int pairs = possiblePairs(arr, n, k);

    cout << "Total possible pairs " << pairs << endl;

    return 0;
}