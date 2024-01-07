//Write a program (WAP) that will take N numbers as inputs and compute their average.
//(Restriction: Without using any array)
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n, total = 0, valu;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin>>valu;
        total = total +  valu;
    }

    cout<<(double)total/n;
}