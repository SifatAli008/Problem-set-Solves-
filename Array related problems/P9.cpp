//WAP that will take n alphabets into an array, and then count number of vowels in that array.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;

    int count=0;
    for (auto i: str) {
        count++;
    }

    cout<<count;
}