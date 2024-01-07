//WAP that will take n integer numbers as input in an array and then insert a number in a position specified by the user in the array.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n,posotion,value;
    cin>>n;
    int arr[n],arr1[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter value and Posotion: ";
    cin>>value>>posotion;

    for(int i=0;i<n+1;i++){
        if(i==posotion){
            arr1[i]=value;
        }
        else{
            arr1[i]=arr[i];
        }
    }

    for(int i=0;i<n+1;i++){
        cin>>arr1[i];
    }
}