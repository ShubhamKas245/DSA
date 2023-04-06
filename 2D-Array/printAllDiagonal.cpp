// Print all the diagonal elements

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void printDiagonal(int row,int col,int n,int m){
   int i=row;
   int j=col;
   while(i<n && j>=0){
    // cout<<arr[i][j];
    i++;
    j--;
   }
   cout<<endl;

}

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        printDiagonal(0,i,n,m);
    }
    for(int i=0;i<n;i++){
        printDiagonal(i,m-1,n,m);
    }
    return 0;
}