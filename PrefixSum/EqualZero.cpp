// # Interview Ques => Google,Microsoft

// Array size N. all the element are equal to zero
// q quries => add value to all elements from index to n-1
// Return the final state of the array

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
    int q, l, r, val;
    cout << "Total Quries : ";
    cin >> q;

    while (q>0)
    {
        cin >> l >> r >> val;
        cout << "Adding " << val << " from " << l << " to " << r << endl;
        arr[l] += val;
        arr[r + 1] -= val;
        q--;
    }
    int ps[n];
    ps[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        ps[i] = ps[i - 1] + arr[i];
    }
    cout << "Prefix sum is : ";
    for (int i = 0; i < n; i++)
    {
        cout << ps[i] << " ";
    }
    cout << endl;
    return 0;
}