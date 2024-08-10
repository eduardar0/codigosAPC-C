#include <stdio.h>

int main() {
    int n;

    // Lê o número natural 'n' da entrada
    scanf("%d", &n);

    // Loop para imprimir a pirâmide
    for (int i = 1; i <= n; i++) {
        // Imprime espaços em branco à esquerda
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Imprime asteriscos
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        // Pula para a próxima linha após cada linha da pirâmide
        printf("\n");
    }

    return 0;
}
