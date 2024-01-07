//Wap that will take n integer numbers in an array, n different integer numbers in a second array and put the sum of the same indexed numbers from the two arrays in a third array.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n],arr3[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin>>arr2[i];
    }

    for (int i = 0; i < n; ++i) {
        arr3[i]=arr1[i]+arr2[i];
        cout<<arr3[i]<<" ";
    }

}