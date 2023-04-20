// You have an array A with N elements. we have two types of operation avilable
// on this array
// 1. We can split an element B into two elements, C & D such that B=C+D
// 2. We can merge two elements P & Q to one elements R, such that R=p^q i.e XOR of P & Q
// You have to determine whether it is possible to convert array A to size 1, containing a
// single element equal to 0 after several splits and/or merge?
// A=[9,17]

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string solve(vector<int> &A)
{
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] % 2 != 0)
        {
            count++;
        }
    }
    if (count % 2 != 0)
    {
        return "No";
    }
    else
    {
        return "Yes";
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout << solve(A) << endl; // Output: Yes
    return 0;
}
