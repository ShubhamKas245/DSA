// Q3. Time to equalitySolved
// Asked in:
  
// Stuck somewhere?
// Ask for help from a TA and get it resolved.
// Get help from TA.
// Problem Description
// Given an integer array A of size N. In one second, you can increase the value of one element by 1.

// Find the minimum time in seconds to make all elements of the array equal.
// 2 4 1 3 2 o/p=8

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int timeToEquality(vector<int> &A){
    int n=A.size();
    int maxEle=*max_element(A.begin(),A.end());
    int totalTime=0;
    for(int i=0;i<n;i++){
        if(A[i] != maxEle){
            totalTime=totalTime + (maxEle-A[i]);
        }
    }
    return totalTime;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> A(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int result = timeToEquality(A);
    cout << "Total time requred: ";
    cout << result << endl;
    return 0;
}