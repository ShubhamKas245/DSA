// Check the given string is palindrome or not
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPal(string p, int s, int e)
{
    if (s >= e)
    {
        return true;
    }
    if (p[s] == p[e])
    {
        return checkPal(p, s+1, e-1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cin >> s;
    if (checkPal(s, 0, s.length() - 1))
    {
        cout << "String is palindrome" << endl;
    }
    else
    {
        cout << "NOT PALINDROME" << endl;
    }
    return 0;
}