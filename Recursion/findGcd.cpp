// find GCD
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int gcdd = gcd(a, b);
    cout << "GCD OF " << a << " & " << b << " : " << gcdd << endl;
    return 0;
}