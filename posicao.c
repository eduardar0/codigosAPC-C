#include <stdio.h>
int main(){
    int posicao =0;
    int t;
    scanf("%d", &t);
    int vet[t];
    for(int i = 0; i<t; i++){
        scanf("%d", &vet[i]);
    }
    int menor = vet[0];
    for(int i =0; i<t; i++){
        if (vet[i] < menor){
            menor = vet[i];
            posicao = i;
        }
    }
    printf("%d\n", posicao);
    return 0;
}