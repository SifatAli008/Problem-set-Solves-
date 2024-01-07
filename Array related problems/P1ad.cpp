//WAP that will take n integer numbers into an array, and then print all the integers into reverse order (from the last valid index to index 0).
// Created by Sifat Ali on 1/5/2024.
//
#include<iostream>
using  namespace std;

int main(){
    int n;
    int Array[n];
    cin>>n;
    for(int i=0;i<n;i++){
        Array[i]=i;
    }
    for(int i=n-1;i>=0;i--){
        cout<<Array[i]<<" ";
    }
}