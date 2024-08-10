#include <stdio.h>
#include <string.h>

int main() {
    int triagem = 0;
    int simCount = 0;
    char resposta[4]; // 'sim' ou 'nao' mais o caractere nulo '\0'

    while (scanf("%3s", resposta) != EOF) {
        if (strcmp(resposta, "sim") == 0) {
            simCount++;
        } else {
            simCount = 0; // Reinicia a contagem se a resposta não for 'sim'
        }

        // Verifica se há necessidade de triagem
        if (simCount >= 2) {
            triagem++;
            simCount = 0; // Reinicia a contagem para o próximo conjunto de respostas
        }
    }

    printf("%d\n", triagem);

    return 0;
}
