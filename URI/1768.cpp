#include <bits/stdc++.h>

using namespace std;

int main(){

    int tamanho, espaco, espacoaux, asterisco = 0;

    while(scanf("%d", &tamanho) != EOF){
        espaco = tamanho/2;

        for(int i = 1; i <= tamanho; i = i + 2){
            espacoaux = espaco;

            if(espaco > 0){
                while(espacoaux--){
                    printf(" ");
                }
            }
            asterisco = i;
            while(asterisco--){
                printf("*");
            }

            printf("\n");
            espaco--;
        }

        espaco = tamanho/2;
        espacoaux = 0;
        for(int i = 0; i < 2; i++){
            espacoaux = espaco;

            while(espacoaux--){
                printf(" ");
            }

            if(i == 0){
                printf("*");
            }else{
                printf("***");
            }

            printf("\n");
            espaco--;
        }
        printf("\n");
    }

    return 0;
}