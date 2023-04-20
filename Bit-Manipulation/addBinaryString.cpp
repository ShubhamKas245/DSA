// Given two binary string A & B. Return their sum (also a binary string)
// a="100" b="11" =>output="111"

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    string result = "";
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            sum += b[j] - '0';
            j--;
        }
        carry = sum / 2;
        result = to_string(sum % 2) + result;
    }
    return result;
}

int main()
{
    string a, b;
    cin >> a >> b;
    string sum = addBinary(a, b);
    cout << "Binary sum is : " << sum << endl;
    return 0;
}