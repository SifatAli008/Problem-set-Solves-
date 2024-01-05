//Program that will multiply and divide a number X by Y. (Use *= and /= operators)
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
    int X,Y;
    cin>>X>>Y;
    X*=Y;
    cout<<"Incremented Value: "<<X<<endl;
    X /= Y;
    cout<<"Incremented Value: "<<X<<endl;
}