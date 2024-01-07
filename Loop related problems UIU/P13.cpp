//Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;
int main(){
    int n,total=1;
    cin>>n;
    cout<<n<<"!=";
    for(int i=1;i<=n;i++){
        cout<<i;
        total=total*i;
        if(i<n){
            cout<<"X";
        }
    }
    cout<<"="<<total;
}