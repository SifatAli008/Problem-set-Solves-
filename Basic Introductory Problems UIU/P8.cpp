//Program that will take three integer numbers from keyboard but assign only the first and last inputs to variables and skip any assignment of the middle one.
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main(){
    int n=3;
    int array[n];
    for(int i=0;i<n;++i){
     cin>>array[i];
    }

    for(int i=0;i<n;++i){
        cout<<array[i]<<" ";
    }

    cout<<endl;

    for(int i=0;i<n;i++){
       if(i==0){
           cout<<"First Value"<<array[i]<<" ";
       }
       if(i==n-1){
           cout<<"Last Value"<<array[i]<<" ";
       }
    }
}