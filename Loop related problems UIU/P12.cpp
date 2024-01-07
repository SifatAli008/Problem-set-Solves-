//Write a program (WAP) that will print Fibonacci series upto Nth terms.
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, …….
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n,nextTrem,a=1,b=1;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a;
     nextTrem=a+b;
     a=b;
     b=nextTrem;
     if(i<n){
    cout<<",";
     }
    }
}