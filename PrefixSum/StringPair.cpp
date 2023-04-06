// Given a string of lowercase alphabets. Return the count of pairs(i,j)
// such that i<j s[i]='a', s[j]='g' =>'ag'
// s=[a b e g a g]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int pairsOfString(char s[], int n)
{
    int ans = 0;
    int countA = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            countA++;
        }
        else if (s[i] == 'g')
        {
            ans = ans + countA;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int totalPairs = pairsOfString(arr, n);
    cout << "Total Pairs is: " << totalPairs << endl;

    return 0;
}