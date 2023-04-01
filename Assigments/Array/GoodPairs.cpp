// Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B).
//  Check if any good pair exist or not.   arr=[1 2 3 4] B=7

#include <iostream>
using namespace std;

bool goodPairs(int arr[], int n, int b)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (arr[i] + arr[j] == b)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, b;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> b;
    if (goodPairs(arr, n, b))
    {
        cout << "Good pairs is " << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}