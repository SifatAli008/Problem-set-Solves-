//Program that will declare and initialize an integer and a floating point number. Then it will perform floating to integer and integer to floating conversions using
//(a)Assignment operation
//(b)Type casting
// Created by Sifat Ali on 1/4/2024.
//

#include <iostream>
using namespace std;
int main(){
  int intValue;
  float floatValue;

    floatValue=123.125;
    intValue=floatValue;
    cout << "Assignment: 123.125 assigned to an int produces " << intValue << endl;

    intValue = -150;
    floatValue = intValue;
    cout << "Assignment: -150 assigned to a float produces " << floatValue << endl;

    floatValue = float(-150);
    cout << "Type Casting: (float) -150 produces " << floatValue << endl;

    intValue = int(123.125);
    cout << "Type Casting: (int) 123.125 produces " << intValue << endl;
}