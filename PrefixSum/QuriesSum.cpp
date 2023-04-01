// # Interview Ques => Amazone

// Quries sum using Prefix sum Technique

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    int q, l, r;
    cout << "Total Quries : ";
    cin >> q;
    while (q > 0)
    {
        int sum = 0;
        cin >> l >> r;
        // cout << "Quries start from " << l << " to " << r << endl;
        if (l == 0)
        {
            sum = ps[r];
        }
        else
        {
            sum = ps[r] - ps[l - 1];
        }

        cout << "SubArray sum from " << l << " to " << r << " = ";
        cout << sum << endl;
        q--;
    }
    return 0;
}