// Print all the possible subarray sum
// 3 -2 4 -1 2 6

#include <iostream>
using namespace std;

// Carry forward technique
void allPossibleSum(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << sum << " ";
        }
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
    cout<<"All Possible sub array sum is =>  ";
    allPossibleSum(arr, n);

    return 0;
}