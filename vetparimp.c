#include <stdio.h>
int main(){
    
    int t;
    scanf("%d", &t);
    int vet[t];
    int pares[t], impares[t];
    int cp = 0;
    int ci = 0;
    for(int i =0; i < t; i++){
        scanf("%d", &vet[i]);
        if(vet[i] % 2== 0){
            pares[cp] = vet[i];
            cp ++;
        }
        else{
            impares[ci] = vet[i];
            ci++;
        }
    }
    for(int i =0; i< cp; i++){
        if(i==0){
            printf("%d", pares[i]);
        }
        else{
            printf(" %d", pares[i]);
        }
    }
    printf("\n");

    for(int i =0; i<ci; i++){
        if(i ==0){
        printf("%d", impares[i]);

        }
        else{
        printf(" %d", impares[i]);
        }
        }
    }
    printf("\n");
    return 0;
}