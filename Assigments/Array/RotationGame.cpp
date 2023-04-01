// Given an integer array A of size N and an integer B, You have to print the same array of
// rotating it B times toward the right
// A=[1 2 3 4] B=2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateGame(int arr[],int n,int k){
    k=k%n;
    for(int i=n-k;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-k;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<"After K rotation Array is ";
    rotateGame(arr,n,k);

    return 0;
}