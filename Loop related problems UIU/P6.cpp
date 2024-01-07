//Write a program (WAP) for the described scenario:
//Player-1 picks a number X and Player-2 has to guess that number within N tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. Otherwise after the completion of N wrong tries, the program prints “Player-1 wins!” and halts.
//
//(Hint: Use break/continue)
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;
int main(){
    int value,n,guess;
    cout<<"Enter value: ";
    cin>>value;
    cout<<"Enter Number of Choice :";
    cin>>n;
    for(int i=n;n>=0;i--){
        guess=0;
      cin>>guess;
      if(value==guess){
          cout<<"Right, Player-2 wins!";
          break;
      }
      else if(n==0){
          cout<<" Player-1 wins!";
      }
      else{
          cout<<"Wrong,"<<n-1<<" Choice(s) Left!"<<endl;
      }
    }
}