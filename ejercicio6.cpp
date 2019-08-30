/*

 Leer tres numeros del usuario separados por espacio: 10 15 20
 Y encuentra el mayor valor: 30

 */
#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3){
        cout << "Mayor valor es: " << num1;
    }
    else{
        if (num2 > num1 && num2 > num3){
            cout << "Mayor valor es: " << num2;
        }
        else{
            cout << "Mayor valor es: " << num3;
        }
    }

    return 0;
}