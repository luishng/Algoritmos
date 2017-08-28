#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, result;

    scanf("%d %d %d", &a, &b, &c);

    result = a+b+c;
    
    if(result==0 || result==24){
        printf("0\n");
    }else if(result < 0){
        printf("%d\n", 24-((result)*-1));
    }else if(result > 24){
        printf("%d\n", result-24);
    }else{
        printf("%d\n", result);
    }
    
    return 0;
}