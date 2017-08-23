#include <bits/stdc++.h>

using namespace std;

int main(){
    int v;
    int t;
    int result;

    while(scanf("%d %d", &v, &t) != EOF){
        t = t * 2;
    
        result = v * t;
    
        printf("%d\n", result);
    }


    return 0;
}