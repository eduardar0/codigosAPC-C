#include<stdio.h>

double regraDe3(int a, int b)
{
    double x = (100 * b) / (double)a;
    return x;
}


int main()
{
    char a;
    char str[1000];

    scanf("%c", &a);
    scanf("%[^\n]s", str);
    int k=0;
    int j =0;

    while(str[k] != '\0')
    {
        k++;
        j++;
    }
    int contW =1;

    for(int i =0; i < j;i++)
    {
        if(str[i] == ' ')
        {
            contW++;
        }
    }
    int por =0;

    for(int i = 0; i<j; i++)
    {
        if(str[i] == a)
        {
        por =1;
        }
    }
    printf("%d", por);

    double y = regraDe3(contW, por);





printf("%.f", y);

return 0;

}

/*
#include <stdio.h>

int main() {
    char letra;
    char texto[1001];

    // Leitura do caractere de interesse
    scanf("%c", &letra);

    // Leitura da linha de texto
    scanf(" %[^\n]s", texto);

    int totalPalavras = 0;
    int palavrasComLetra = 0;

    int i = 0;
    while (texto[i] != '\0') {
        // Ignora espaços em branco no início da palavra
        while (texto[i] == ' ') {
            i++;
        }

        // Verifica se a letra está presente na palavra
        int temLetraNaPalavra = 0;
        while (texto[i] != ' ' && texto[i] != '\0') {
            if (texto[i] == letra) {
                temLetraNaPalavra = 1;
            }
            i++;
        }

        // Conta a palavra se a letra estiver presente
        if (temLetraNaPalavra) {
            palavrasComLetra++;
        }

        // Conta todas as palavras
        totalPalavras++;
    }

    // Calcula a porcentagem
    double porcentagem = (double)palavrasComLetra / totalPalavras * 100;

    // Imprime o resultado com uma casa decimal de precisão
    printf("%.1f\n", porcentagem);

    return 0;
}

*/

 