//Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
//a)(a+b)<=80
//b)!(a+c)
//c)a!=0
// Created by Sifat Ali on 1/4/2024.
//

#include <iostream>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;

   if(a+b<=8){
       cout<<1;
   }else{
       cout<<0;
   }

    if(!(a+c)){
        cout<<1;
    }else{
        cout<<0;
    }

    if(a!=0){
        cout<<1;
    }else{
        cout<<0;
    }

}