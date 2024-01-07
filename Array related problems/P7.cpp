//WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    for (int i = 0; i < n/2; ++i) {
        for (int j = n/2; j < n; ++j) {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr[i]<<" ";
    }

}