// Given a,x, p
// calculate a^p

#include <iostream>;
#include <bits/stdc++.h>
using namespace std;

int powerrMod(int a, int x, int p)
{
    int ans = 1;
    for (int i = 1; i <= x; i++)
    {
        ans = (ans * a) % p;
    }
    return ans;
}

int main()
{
    int a, x, p;
    cin >> a >> x >> p;
    int pow = powerrMod(a, x, p);
    cout << pow << endl;
    return 0;
}
