//Program that will receive the values of an integer, a floating point number, a character from the keyboard and print those values.
// Created by Sifat Ali on 1/4/2024.
//
#include "iostream"
using namespace std;

int main(){
    int num;
    double num1;
    char ch;

    // Input values for the variables
    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a floating point number: ";
    cin >> num1;

    cout << "Enter a character: ";
    cin >> ch;

    // Output the initialized values
    cout << "The integer value: " << num << endl;
    cout << "The floating point value: " << num1 << endl;
    cout << "The character value: " << ch << endl;

}