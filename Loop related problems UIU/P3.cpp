//Write a program (WAP) that will print following series upto Nth terms.
//1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 for(int i=1;i<=n;i++){
     if(i%2==0){
         cout<<"0";
     }
     if(i%2!=0){
         cout<<"1";
     }
     if(i<n){
        cout<<"," ;
     }
 }
}