#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamanho, numero_central = 0;

    while(scanf("%d", &tamanho) != EOF){
        int numero_central = ((tamanho+1)/2)-1;
        int matriz[tamanho][tamanho];
        int mi = tamanho/3;
        int ms = tamanho - mi;

        for(int linha = 0; linha < tamanho; linha++){
            for(int coluna = 0; coluna < tamanho; coluna++){
                matriz[linha][coluna] = 0;
                if(coluna == linha){
                    matriz[linha][coluna] = 2;
                }

                if(coluna+linha == tamanho-1){
                    matriz[linha][coluna] = 3;
                }

                if(( linha >= mi && linha < ms) && (coluna >= mi && coluna < ms)){
                    matriz[linha][coluna] = 1;
                }

                if(coluna == numero_central && linha == numero_central){
                    matriz[linha][coluna] = 4;
                }

                if(tamanho-1 != coluna){
                    printf("%d", matriz[linha][coluna]);
                }else{
                    printf("%d\n", matriz[linha][coluna]);
                }
            }
        }
        printf("\n");
    }

    return 0;
} 