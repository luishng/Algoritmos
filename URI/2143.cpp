#include <bits/stdc++.h>

using namespace std;

int main(){
    int test_case;
    int qnt_people;
    int result;
    
    scanf("%d", &test_case);

    while(test_case != 0){
        for(int i = 1; i <= test_case; i++){
            scanf("%d", &qnt_people);

            if(qnt_people % 2 == 1){
                result = ((qnt_people - 1)*2)+1; 
            }else{
                result = ((qnt_people - 2)*2)+2;
            }
             
            printf("%d\n", result);
        }

        scanf("%d", &test_case);
    }


    return 0;
}