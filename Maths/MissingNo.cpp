// Given with an array which contains all the numbers from 1 to N
// except one missing number.find their missing no

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int missingNo(vector<int> &nums, int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = res ^ i;
    }
    for (int num : nums)
    {
        res ^= num;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 1; i < n; i++)
    {
        cin >> nums[i];
    }
    int MissedNo = missingNo(nums, n);
    cout << "Missing No is " << MissedNo << endl;
    return 0;
}