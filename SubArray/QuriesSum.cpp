// Given with array N :
// Q quries  start l & end r => return the sum of this range
// -3 6 2 4 5 2 8 -9 3 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int q,l,r;
    cin>>q;
    while(q>0){
        cin>>l>>r;
        int sum=0;
        for(int i=l;i<=r;i++){
         sum+=arr[i];
        }
    cout<<"SubArray sum from " <<l<< " & " <<r<< " Sum is ";
        cout<<sum<<endl;
        q--;
    }

    return 0;
}