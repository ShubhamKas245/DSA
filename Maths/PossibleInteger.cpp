// Problem Description
// Given two integers A and B, find the greatest possible positive integer M, such that A % M = B % M.

// Problem Constraints
// 1 <= A, B <= 109
// A != B

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int possibleInteger(int a, int b)
{
    int diff = abs(a - b);
    int m = diff;

    for (int i = 2; i <= min(a, b) / 2; i++)
    {
        if (diff % i == 0 && (a % i == b % i))
        {
            m = i;
        }
    }
    return m;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int possibleInt = possibleInteger(a, b);
    cout << possibleInt << endl;

    return 0;
}