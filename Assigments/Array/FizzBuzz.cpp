// Given a positive integer A, return an array of strings with all the integers from 1 to N. 
// But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5,
//  the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, 
//  the array should have "FizzBuzz" instead of the number.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<string> fizzBuzz(int n){
    vector<string> result;
    for(int i=1;i<=n;i++){
     if(i%3==0 && i%5==0){
        result.push_back("FizzBuzz");
     }else if(i%3==0){
        result.push_back("Fizz");
    }else if(i%5==0){
        result.push_back("Buzz");
    }else{
        result.push_back(to_string(i));
    }
    }
    return result;
}

int main(){
    int n;
    cin>>n;
    cout << "Enter the value of N: ";
    vector<string> result=fizzBuzz(n);

    for(auto s:result){
        cout<<s<< " ";
    }
    cout<<endl;
    return 0;
}