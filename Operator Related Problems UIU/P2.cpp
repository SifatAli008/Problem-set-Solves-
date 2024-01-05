//Program that will calculate the circumference of a circle having radius r.
//Area, A = 2 * Pi * r
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>

#define  Pi 3.1416
using namespace std;

int main(){
 double Area,radius;
 cin>>radius;
    Area = 2 * Pi*radius;

    cout << "Area of the circle: " << Area << endl;

}