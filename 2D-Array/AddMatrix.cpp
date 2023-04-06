// Print 2d matrix of sum

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m], arr2[n][m],sum[n][m];
    cout<<"First Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Second Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    cout<<"Two matrix sum is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}