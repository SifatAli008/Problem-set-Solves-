//Program that will define a global and a local variable with the same name but with different values, and then do the following steps in order-
//A.Print the value of the variable before defining the local variable
//B.Print the value of the variable after defining the local variable
//C.Explicitly print the value of the variable as global
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int gvar=10;

int main(){
 cout<<"A. Value of myVar before defining local variable: "<<gvar<<endl;
 int gvar=20;
 cout<<"B. Value of myVar after defining local variable: " <<gvar<<endl;
 cout<<"C. Value of global myVar: "<<::gvar;
}