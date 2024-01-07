//Write a program (WAP) that will find nCr where n >= r; n and r are integers.
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;

int factorial(int n){
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    if (n >= r) {
        int result = nCr(n, r);
        cout << "nCr is: " << result << endl;
    } else {
        cout << "Invalid input! n should be greater than or equal to r." << endl;
    }
}