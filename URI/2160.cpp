#include <bits/stdc++.h>

using namespace std;

int main(){
    char linha[500];

    scanf("%[^\n]", linha);
    
    if(strlen(linha) <= 80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}