//Program that will take an floating point number as input from the keyboard and use printf function to perform the followings:
//(a)Print the number right justified within 10 columns
//(b)Print the number to be right justified to 2 columns (Assuming the input has more than 2 digits)
//(c)Print the number rounded to two decimal places
//(d)Print the number rounded to integer (without using conversion or type casting)
//(e)Prints the number in exponential notation/scientific notation
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main(){
  float num;

  cout<< "Enter a floating-point number: ";
  cin >> num;

    printf("(a) Number right justified within 10 columns: %10.2f\n", num);
    printf("(b) Number right justified to 2 columns: %2.2f\n", num);
    printf("(c) Number rounded to two decimal places: %.2f\n", num);
    printf("(d) Number rounded to integer: %.0f\n", num);
    printf("(e) Number in exponential notation: %e\n",num);

}