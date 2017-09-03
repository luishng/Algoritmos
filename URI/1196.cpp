#include <bits/stdc++.h>

using namespace std;

int main() { 
    string teclado = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"; 
    string codigo;

    while(getline(cin, codigo)){
        string descriptografado = "";

        for(int i = 0; i < codigo.size(); i++){
            if(codigo[i] == ' '){
                descriptografado += ' ';
            }else{
                int posicao = teclado.find(codigo[i]);
                descriptografado += teclado[posicao-1];
            }
        }

        cout << descriptografado << endl;
    }
    
    return 0;
}