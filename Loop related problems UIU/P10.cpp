//Write a program (WAP) that will give the sum of first Nth terms for the following series.
//1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….
// Created by Sifat Ali on 1/5/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n,sum;
    cin >> n;
    for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                sum-=i;
            } else if (i % 2 != 0) {
                sum+=i;
            }
    }
    cout<<sum;
}