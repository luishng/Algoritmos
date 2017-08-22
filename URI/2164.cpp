#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    double bitnet;

    while (scanf("%d", &n) != EOF) {
        bitnet = ((pow((1+sqrt(5))/2,n) - pow(((1))/2),n))/sqrt(5));
        
        printf("%.1lf\n", bitnet);

    }

    return 0;
}