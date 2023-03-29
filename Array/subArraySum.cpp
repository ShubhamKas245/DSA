// Print the sub-array sum using multiple queries

#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int q,s,e;
   cin>>q;
  while(q>0){
    int sum=0;
    cin>>s>>e;
    for(int i=s;i<=e;i++){
        sum+=arr[i];
    }
    cout<<"SubArray Sum from " << s <<" to " << e <<" is "<< sum<<endl;
    q--;
  }
    // cout<<"Total Sub-Array Sum is " <<sum<<endl;

    return 0;

}