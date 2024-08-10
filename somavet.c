#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t], piu[t];
    for(int i=0; i<t; i++){
        scanf("%d", &vet[i]);
    }
    for(int i=0; i<t; i++){
    scanf("%d", &piu[i]);
    }
    for(int i=0; i<t; i++){
    printf("%d ", vet[i] + piu[i]);
    }

}