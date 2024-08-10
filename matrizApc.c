#include<stdio.h> 
int main () {
    int linhas;
    int colunas; 
    scanf("%d %d", &linhas, &colunas); 

    for (int i= 0; i < linhas; i++){
        for (int j = 0; j <colunas; j++) {
            printf("[%03d,%03d]", i, j);
        }
        printf("\n");
    }
}