/*
Escribir un programa que imprima lo siguiente:

12*****
123****
1234***
12345**
123456*
1234567

*/

#include <iostream>
using namespace std;
int x = 6, y = 7, z = x - 1;

int main() {
    for (int Y = 2; Y <= y; Y++){
        for (int X = 0; X != Y; X++){
            cout << X+1;
        }
        for (int Z = 1; Z < x; Z++){
            cout << "*";
        }
        x--;
        cout << "\n";
    }


    return 0;
}
