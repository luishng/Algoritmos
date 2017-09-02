#include <bits/stdc++.h>

using namespace std;

int main(){
    int reais, centavos;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
    int moeda100 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda1 = 0;

    scanf("%d.%d", &reais, &centavos);

    while(reais != 0){
        if(reais >= 100){
            nota100++;
            reais -= 100;
        }else if(reais >= 50){
            nota50++;
            reais -= 50;
        }else if(reais >= 20){
            nota20++;
            reais -= 20;
        }else if(reais >= 10){
            nota10++;
            reais -= 10;
        }else if(reais >= 5){
            nota5++;
            reais -= 5;
        }else if(reais >= 2){
            nota2++;
            reais -= 2;
        }else if(reais == 1){
            moeda100++;
            reais -= 1;
        }
    }

    while(centavos != 0){
        if(centavos >= 50){
            moeda50++;
            centavos -= 50;
        }else if(centavos >= 25){
            moeda25++;
            centavos -= 25;
        }else if(centavos >= 10){
            moeda10++;
            centavos -= 10;
        }else if(centavos >= 5){
            moeda5++;
            centavos -= 5;
        }else if(centavos >= 1){
            moeda1++;
            centavos -= 1;
        }
    }

    printf("NOTAS:\n", nota100);
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n", nota100);
    printf("%d moeda(s) de R$ 1.00\n", moeda100);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda1);

    return 0;
}