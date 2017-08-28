#include <bits/stdc++.h>

using namespace std;

int main(){
    char word[51];
    int i;

    while (scanf("%[^\n]", word) != EOF) {
        getchar();
        bool upper = true;

        for(i = 0; i < int(strlen(word)); i++){
            if(word[i] == ' '){
                word[i] = ' ';
            }else if(upper){
                word[i] = toupper(word[i]);
                upper = false;
            }else if (!upper){
                word[i] = tolower(word[i]);
                upper = true;
            }
        }
    
        printf("%s\n", word);
    }

    return 0;
}