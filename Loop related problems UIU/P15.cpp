//Write a program (WAP) that will find xy (x to the power y) where x, y are positive integers.
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;
int main(){
    int n,value,total=1;
    cout<<"Enter  value of Base : ";
    cin>>value;
    cout<<"Enter  value of Power : ";
    cin>>n;
    for(int i=1;i<=n;i++ ){
        total=total*value;
    }
    cout<<total;
}