// Square matrix , NxM Print all diagonals elements (R to L)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Diagonal Matrix Are :" << endl;

    int i = 0, j = n - 1;
    while (i < n && j >= 0)
    {
        cout << arr[i][j] << " ";
        i++;
        j--;
    }

    return 0;
}