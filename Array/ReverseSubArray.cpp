// Reverse Sub-Array

#include<iostream>
using namespace std;

void reverseSubArray(int arr[],int s,int e){
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,e;
    cin>>s>>e;
    cout<<"Reversing the subarray from "<<s<< " to " <<e<<endl;
    reverseSubArray(arr,s,e);
    printArray(arr,n);

    return 0;
}