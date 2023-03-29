// Print the starting index & ending index of all sub-array whose length K
// 3 4 2 -1 6 7 8 9 3 2 -1 4

#include<iostream>
using namespace std;

void PrintSubarrayKLength(int arr[],int n,int k){
    int s,e;
    for(int i=0;i<=n-k;i++){
       s=i,  e=i+k-1;
 cout<<"("<<s<<","<<e<<") ";    }
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    PrintSubarrayKLength(arr,n,k);

    return 0;
}