// Print 1 to N
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printNumbers(n - 1);
    cout << n <<" ";
}

int main()
{
    int n;
    cin >> n;
    printNumbers(n);

    return 0;
}