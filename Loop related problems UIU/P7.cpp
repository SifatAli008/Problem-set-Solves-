//Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard.
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main(){
   char value;
   do {
        cout<<value<<endl;
        cout<<"Enter a charecter: ";
       cin>>value;
   }while(value!='A');
}