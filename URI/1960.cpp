#include <bits/stdc++.h>

using namespace std;

int main(){
    string romano_numero = "";
    int numero;

    scanf("%d", &numero);

    while(numero != 0){
        if(numero >= 1000){
            romano_numero += "M";
            numero -= 1000;
        }else if(numero >= 900){
            romano_numero += "CM";
            numero -= 900;
        }else if(numero >= 500){
            romano_numero += "D";
            numero -= 500;
        }else if(numero >= 400){
            romano_numero += "CD";
            numero -= 400;
        }else if(numero >= 100){
            romano_numero += "C";
            numero -= 100;
        }else if(numero >= 90){
            romano_numero += "XC";
            numero -= 90;
        }else if(numero >= 50){
            romano_numero += "L";
            numero -= 50;
        }else if(numero >= 40){
            romano_numero += "XL";
            numero -= 40;
        }else if(numero == 19){
            romano_numero += "XIX";
            numero -= 19;
        }else if(numero >= 10){
            romano_numero += "X";
            numero -= 10;
        }else if(numero == 9){
            romano_numero += "IX";
            numero -= 9;
        }else if(numero >= 5){
            romano_numero += "V";
            numero -= 5;
        }else if(numero == 4){
            romano_numero += "IV";
            numero -= 4;
        }else if(numero >= 1){
            romano_numero += "I";
            numero -= 1;
        }
    }

    cout << romano_numero << "\n";

    return 0;
}