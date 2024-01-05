//Program that will evaluate the following equations -
//X = a – b / 3 + c * 2 – 1
//Y = a – ( b / ( 3 + c ) * 2) - 1
//Z = a – ( ( b / 3) + c * 2) - 1
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    double X,Y,Z;

    cin>>a>>b>>c;

    X = a - b / 3 + c * 2 - 1;
    Y = a - (b / (3 + c) * 2) - 1;
    Z = a - ((b / 3) + c * 2) - 1;

    cout << "X = " << X << endl;
    cout << "Y = " << Y << endl;
    cout << "Z = " << Z << endl;

}