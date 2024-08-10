#include <stdio.h>

// FunÃ§Ã£o para verificar se b corresponde aos Ãºltimos dÃ­gitos de a
int encaixa(int a, int b) {
    while (b > 0) {
        if (a % 10 != b % 10) {
            return 0; // Retorna 0 se algum dÃ­gito nÃ£o corresponder
        }
        a /= 10;
        b /= 10;
    }
    return 1; // Retorna 1 se b corresponder aos Ãºltimos dÃ­gitos de a
}

// FunÃ§Ã£o para verificar se o menor nÃºmero Ã© um segmento do outro
int segmento(int a, int b) {
    // Verifica se a Ã© menor que b
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Se o menor nÃºmero for 0, entÃ£o Ã© um segmento de qualquer nÃºmero
    if (a == 0) {
        return 1;
    }

    // Verifica se o menor nÃºmero (a) Ã© um segmento de b ou vice-versa
    while (b > 0) {
        if (encaixa(b, a)) {
            return 1; // Retorna 1 se a for um segmento de b
        }
        b /= 10;
    }
    
    return 0; // Retorna 0 caso contrÃ¡rio
}