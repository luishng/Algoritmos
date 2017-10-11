#include <bits/stdc++.h>

using namespace std;
#define MAX_W (500*100)/2
#define MAX_V (500*100)/2
#define MAX_ITENS 100

// pesos e valores
int W[MAX_ITENS];
int V[MAX_ITENS];

// matriz de memoização
int memo[MAX_W][MAX_V];

int knapsack(int i, int w) {

    if (i < 0 || w <= 0) return 0;

    if (memo[i][w] != -1) return memo[i][w];

    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    // Caso contrário o valor ótimo será o maior valor entre a decisão
    // de não carregar o item e carregar o item
    return memo[i][w] = max(knapsack(i - 1, w),
                            knapsack(i - 1, w - W[i]) + V[i]);
}

int main() {
    int cases, soma = 0, diferenca;

    scanf("%d", &cases);

    while(cases--){
        int qnt_coins;
        memset(memo, -1, sizeof memo);

        scanf("%d", &qnt_coins);

        for(int i = 0; i < qnt_coins; i++){
            int coin;
            scanf("%d", &coin);
            W[i] = coin;
            V[i] = coin;
            soma += coin;
        }

        diferenca = knapsack(qnt_coins-1, soma/2);

        printf("%d\n", soma-2*diferenca);
    }
}