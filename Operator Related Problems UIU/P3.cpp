//rogram that will take two numbers (a, b) as inputs and compute the value of the equation – (Without using math.h)
//X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
   double  a,b,X;
   cin>>a>>b;

   X=(3.31*a*a+2.01*b*b*b)/(7.16*b*b+2.01*a*a*a);
   cout<<"X = "<<X;
}