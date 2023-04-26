//  Toggle the ith bit of N

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int toggleBit(int n, int i)
{
    return (n ^ (1 << i));
}

int main()
{
    int n, i;
    cin >> n >> i;
    int togglebit = toggleBit(n, i);
    cout << "Toggle Bit : " << togglebit << endl;

    return 0;
}

// Given a +ve no N. Toggle all the bits starting from the right most set bit.
// N=20