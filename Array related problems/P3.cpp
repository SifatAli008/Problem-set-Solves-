//WAP that will take n integer numbers into an array, and then sum up all the even integers in that array.
// Created by Sifat Ali on 1/5/2024.
//
#include<iostream>
using  namespace std;

int main(){
    int n,sum=0;
    int Array[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>Array[i];
    }
    for(int i=n-1;i>=0;i--){
        if(Array[i]%2==0)
        sum=sum+Array[i];
    }
    cout<<sum;
}