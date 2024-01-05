//Program that will take two numbers X and Y as inputs, then calculate and print the values of their addition, subtraction, multiplication, division (quotient and reminder).
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
int X,Y;
    cout<<"Enter First Number : ";
    cin>>X;

    cout<<"Enter Second Number : ";
    cin>>Y;

    cout<<"Addition: "<<X+Y<<endl;
    cout<<"Subtraction: "<<X-Y<<endl;
    cout<<"Multiplication: "<<X*Y<<endl;
    cout<<"Quotient: "<<X/Y<<endl;
    cout<<"Reminder: "<<X%Y<<endl;


}