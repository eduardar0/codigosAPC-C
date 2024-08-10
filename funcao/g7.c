#include <stdio.h>

void inverteEImprimeASCII(char *palavra) {
    int i = 0;
    
    // Encontrar o comprimento da string
    while (palavra[i] != '\0') {
        i++;
    }

    // Imprimir os caracteres invertidos com seus códigos ASCII
    for (int j = i - 1; j >= 0; j--) {
        printf("%c-%d\n ", palavra[j], palavra[j]);
    }

    printf("\n");
}

int main() {
    char palavra[101];

    // Ler uma linha completa, incluindo espaços
    scanf("%[^\n]s", palavra);

    // Chamar a função para inverter e imprimir a string
    inverteEImprimeASCII(palavra);

    return 0;
}
