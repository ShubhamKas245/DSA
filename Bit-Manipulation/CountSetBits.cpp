// Given N integer claculate how many set bits in N

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int c = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
        {
            c++;
        }
        n = n >> 1;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    int totalSetBits = countSetBits(n);
    cout << "Total set bits " << totalSetBits << endl;

    return 0;
}