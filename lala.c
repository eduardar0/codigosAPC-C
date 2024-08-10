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
    int menor2 = vet[0];
    for (int i=0; i <j; i++){
        if (vet[i]< menor2 && vet[i] != menor){
            menor2 = vet[i];
        }
    }

        printf("O menor numero é: %d\n", menor2);
        return 0; 
    }

    /*#include <stdio.h>

int main() {
    int N, i;

    // Leia o tamanho do vetor
    scanf("%d", &N);

    if (N < 3 || N > 10000) {
        printf("O tamanho do vetor deve estar entre 3 e 10,000.\n");
        return 1;
    }

    int vetor[N];

    // Leia os elementos do vetor
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int menor = vetor[0];
    int segundo_menor = vetor[0];
    int terceiro_menor = vetor[0];

    for (i = 0; i < N; i++) {
        if (vetor[i] < menor) {
            terceiro_menor = segundo_menor;
            segundo_menor = menor;
            menor = vetor[i];
        } else if (vetor[i] < segundo_menor && vetor[i] != menor) {
            terceiro_menor = segundo_menor;
            segundo_menor = vetor[i];
        } else if (vetor[i] < terceiro_menor && vetor[i] != segundo_menor && vetor[i] != menor) {
            terceiro_menor = vetor[i];
        }
    }

    printf("%d\n%d\n", segundo_menor, terceiro_menor);

    return 0;
}
*/