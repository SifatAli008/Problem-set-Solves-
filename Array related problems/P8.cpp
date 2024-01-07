//WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
 int n,min,max,minIndex=0,maxIndex=0;
 cin>>n;
 int arr[n];

    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    min = max = arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minIndex=i;
        }
        if(arr[i]>max) {
            max = arr[i];
            maxIndex = i;
        }
    }

    cout<<"Min : "<<min<<" "<<minIndex<<endl;
    cout<<"Max : "<<max<<" "<<maxIndex<<endl;

}