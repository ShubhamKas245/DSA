// Find pow of a into n
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    int x = pow(a, n / 2);
    if (n % 2 == 0)
    {
        return x * x;
    }
    else
    {
        return a * x * x;
    }
}

int main()
{
    int a, n;
    cin >> a >> n;
    int powerr = power(a, n);
    cout << powerr << endl;
    return 0;
}
