//WAP that will take n integer numbers into an array, and then sum up all the even indexed integers in that array.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(i%2==0){
            total=total+arr[i];
        }
    }

    cout<<total;
}