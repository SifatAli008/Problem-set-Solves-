//Program that will take a floating point number X as input and evaluate A,B,C where-
//A = Value when X is rounded up to the nearest integer
//B = Value when X is rounded down to the nearest integer
//C = Absolute value of X
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double X;
    cin>>X;
    cout<<"A (Value when X is rounded up): "<<ceil(X)<<endl;
    cout << "B (Value when X is rounded down): " <<floor(X)<<endl;
    cout<< "C (Absolute value of X): " <<fabs(X)<<endl;
}