#include <bits/stdc++.h>

using namespace std;

int main(){
    int numero, repeticao, qnt_caso = 1;
    vector<int> v_numeros;

    while(scanf("%d", &numero) != EOF){
        repeticao = 2;
        if(numero == 0){
            printf("Caso %d: 1 numero\n0\n\n", qnt_caso);
        }else if(numero == 1){
            printf("Caso %d: 2 numeros\n0 1\n\n", qnt_caso);
        }
        else{
            v_numeros.push_back(0);
            v_numeros.push_back(1);
            
            while(repeticao <= numero){
                for(int i = 0; i < repeticao; i++){
                    v_numeros.push_back(repeticao);
                }

                repeticao++;
            }

            printf("Caso %d: %d numeros\n", qnt_caso, v_numeros.size());
            for(int i = 0; i < v_numeros.size(); i++){
                if(i == v_numeros.size()-1){
                    printf("%d\n\n", v_numeros[i]);
                }else{
                    printf("%d ", v_numeros[i]);
                }
            }
        }

        v_numeros.clear();
        qnt_caso++;
    }

    return 0;
}