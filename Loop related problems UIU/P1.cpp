//Write a program (WAP) that will print following series upto Nth terms.
//1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i;
        if(i<n){
            cout<<",";
        }
    }
}