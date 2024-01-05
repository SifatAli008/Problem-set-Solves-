//Program that will take calculate the roots of a quadratic equation (a.x2 + b.x + c = 0) from the formula, (here, dot (.) stands for multiplication) -
//ROOT=-b+_sqrt(b*b-4ac)/2.a
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int a,b,c;
    double root1, root2;
    cin>>a>>b>>c;

    double discriminant = b * b - 4 * a * c;

    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;


}