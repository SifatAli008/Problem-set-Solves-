//WAP  that will take n floating point numbers into an array, and then find the average of those numbers.
// Created by Sifat Ali on 1/5/2024.
//
#include<iostream>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;
    double arr[n];


    for(int i=0 ;i<n;i++){
        cin>>arr[i];
        total=total+arr[i];
    }

    cout<<total/n;


}
