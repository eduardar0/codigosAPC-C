#include<stdio.h>
int main(){
    int j;
    printf("Digite quantos numeros deseja comparar:\n");
    scanf("%d", &j);
    int vet[j];
    for (int i =0; i<j; i++){
        scanf("%d", &vet[i]);
    }
    int menor = vet[0];
    for (int i=1; i<j; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
        printf("O menor numero é: %d\n", menor);
       return 0; 
    }