// how to print the 2d matrix row by row

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
    cout << "Print 2d Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;

        cout << "Sum of the row is " << sum << endl;
    }
    return 0;
}
