//Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
//1)(a+b)<=80&&b>=0
//2)(a-b)==0||c!=0
//3)a!=b||(b<a)&&c>0
// Created by Sifat Ali on 1/4/2024.
//

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if((a+b)<=80&&b>=0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }

    if((a-b)==0||c!=0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }

    if(a!=b||(b<a)&&c>0){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }

}