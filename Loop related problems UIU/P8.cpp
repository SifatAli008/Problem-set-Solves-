//Write a program (WAP) that will reverse the digits of an input integer.
// Created by Sifat Ali on 1/5/2024.
//

#include <iostream>
using namespace std;

int main(){
    int number,reversedNumber = 0;
cin>>number;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    cout<< reversedNumber;


}
