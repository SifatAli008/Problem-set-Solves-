//WAP that will take n integers into an array A, and then copy all numbers in reverse order from array A to another array B. Finally show all elements of both array A and B.
// Created by Sifat Ali on 1/6/2024.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n],arr1[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    for (int i = n-1; i >= 0; --i) {
        arr1[n-1-i]=arr[i];
    }
    for (int i = 0; i < n; ++i) {
        cout<<arr1[i]<<" ";
    }

}