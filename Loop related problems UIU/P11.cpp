//Write a program (WAP) that will calculate the result for the first Nth terms of the following series.  [In that series sum, dot sign (.) means multiplication]
//1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + …….
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;
int main(){
      int n,sum;
      cin>>n;
      for(int i=1;i<=n;i++){
          sum+=(i*i)*(i+1);
      }
      cout<<sum;
}