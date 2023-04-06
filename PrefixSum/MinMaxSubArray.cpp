// Gievn an array. Return the length of smallest sub array which contains both the min &
// max of the array
// arr=[1 2 3 1 3 4 6 4 6 3]

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
    sort(arr, arr + n);
    int minMum = arr[0];
    int maxiMum = arr[n - 1];

    int nmax = n - 1, nmin = 0;
    int ans = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == minMum)
        {
            nmin = i;
            if(nmax!=-1){
                ans=min(ans,nmax-i+1);
            }
        }
        if (arr[i] == maxiMum)
        {
            nmax = i;
            if(nmin!=-1){
                ans=min(ans,nmin-i+1);
            }
        }
        
    }
    cout << ans << endl;
    return 0;

}
