// Given an array with size N. Count numbers of elements that have atleasts 1 elements
// greater than itself
// arr=[3 2 6 8 4 8 5]

#include<iostream>
using namespace std;

// int countGreater(int arr[],int n){
    
//     int maxiNum=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>maxiNum)
//             maxiNum=arr[i];
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==maxiNum)
//         count++;
//     }
//     return n-count;
// }

int countGreater(int arr[], int n) {
    int count = 0;
    int maxNum = arr[n-1];
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] < maxNum) {
            count++;
        } else {
            maxNum = arr[i];
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int greaterElememts=countGreater(arr,n);
    cout<<"Total greater than elements " << greaterElememts<<endl;

    return 0;
}