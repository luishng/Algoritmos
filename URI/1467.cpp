#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        if((a==1 && b==1 && c==1) || (a==0 && b==0 && c==0)){
            printf("*\n");
        }else if ((a==1 && b==0 && c==0) || (a==0 && b==1 && c==1)){
            printf("A\n");
        }else if((a==0 && b==1 && c==0) || (a==1 && b==0 && c==1)){
            printf("B\n");
        }
        else{
            printf("C\n");
        }
    }
    
    return 0;
}