//Program that will declare a variable from each data type: unsigned int, unsigned long int, unsigned long long int, unsigned short int. Then it will initialize them with values and print them.
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
    unsigned int unsignedIntVar = 4294967295;
    unsigned long unsignedLongVar = 4294967295;
    unsigned long long unsignedLongLongVar = 18446744073709551615ULL;
    unsigned short unsignedShortVar = 65535;


    cout << "The unsigned int value: " << unsignedIntVar << std::endl;
    cout << "The unsigned long int value: " << unsignedLongVar << std::endl;
    cout << "The unsigned long long int value: " << unsignedLongLongVar << std::endl;
    cout << "The unsigned short int value: " << unsignedShortVar << std::endl;

    return 0;
}