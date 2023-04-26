// Max Consecutive 1's
// Given a Binary array we can atmost replace a single 0 with 1,
// Find max Consecutive 1's we can get

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxConsecutive(vector<int> &nums)
{
    int maxOne = 0, zeroCnt = 0, left = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zeroCnt++;
        }
        while (zeroCnt > 1)
        {
            if (nums[left] == 0)
            {
                zeroCnt--;
            }
            left++;
        }
        maxOne = max(maxOne, i - left + 1);
    }
    return maxOne;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int maxOnes = maxConsecutive(nums);
    cout << maxOnes << endl;
}