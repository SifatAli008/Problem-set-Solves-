//WAP that will take n integers into an array, and then search a number into that array. If found then print its index. If not found then print “NOT FOUND”.
// Created by Sifat Ali on 1/6/2024.
//
#include <iostream>
using namespace std;

int main(){
    int n,target=0;
    cout<<"Enter Target value : ";
    cin>>target;
    cout<<endl<<"Enter number of Element :";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
       cin>>arr[i];
       if(target==arr[i]){
           cout<<"Found"<<i<<endl;
       } else{
           cout<<"Not Found";
       }
    }
        
}