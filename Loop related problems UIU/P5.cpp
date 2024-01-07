//Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”
// Created by Sifat Ali on 1/4/2024.
//
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 <= num2) {
        for (int i = num1; i <= num2; ++i) {
            cout << i * i;
            if (i < num2) {
                cout << ",";
            }
        }
        cout << ",Reached!";
    } else {
        for (int i = num1; i >= num2; --i) {
            cout << i * i;
            if (i > num2) {
                cout << ",";
            }
        }
        cout << ",Reached!";
    }

    return 0;
}
