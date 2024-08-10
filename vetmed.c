#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t];
    int soma =0;
    for(int i =0; i<t; i++){
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    int media = soma / t;

    for(int i =0; i<t; i++){
        if(vet[i] > media){
            printf("%d ", vet[i]);
        }
    } 
    
    return 0;
}

/*#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Declara um vetor para armazenar os números
    int vetor[N];

    // Lê os números da sequência e calcula a soma
    int soma = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Calcula a média aritmética
    int media = soma / N;

    // Variável para controlar se há elementos maiores que a média
    int encontrou_maiores = 0;

    // Exibe os elementos maiores que a média
    for (int i = 0; i < N; i++) {
        if (vetor[i] > media) {
            printf("%d", vetor[i]);
            encontrou_maiores = 1; // Marcamos que encontramos pelo menos um elemento maior
            if (i < N - 1) {
                printf(" "); // Adiciona espaço, exceto para o último elemento
            }
        }
    }

    // Se não houver elementos maiores que a média, exibe 0
    if (!encontrou_maiores) {
        printf("0");
    }

    printf("\n");

    return 0;
}
*/