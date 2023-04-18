// Given N , i check if ith bit persist in N is set or unset

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkBit(int i, int n)
{
    if ((n >> i) & 1 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n, i;
    cin >> n >> i;
    if (checkBit(i, n))
    {
        cout << "Set" << endl;
    }
    else
    {
        cout << "Unset" << endl;
    }
    return 0;
}