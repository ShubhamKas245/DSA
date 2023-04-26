// Ques => Count Pairs "ag"
// Given a char[], calculate no of pairs i,j such that i<j, s[i]=='a' && s[j]='g',
// Note:- All characters are lower case
// eg=> b a a g d c a g

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Using carry forward Techniques
int pairs(char a[], int n)
{
    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a')
        {
            cnt++;
        }
        if (a[i] == 'g')
        {
            ans = ans + cnt;
        }
    }
    return ans;
}
// T.C => O(n^2)

int main()
{
    int n;
    cin >> n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int totalPairs = pairs(a, n);
    cout << "Total Pairs : " << totalPairs << endl;
}