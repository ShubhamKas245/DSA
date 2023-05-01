// find factorial of given number A using recursion

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return fact(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    int factorial = fact(n);
    cout << "Factorial of 5 is :  " << factorial << endl;
    return 0;
}