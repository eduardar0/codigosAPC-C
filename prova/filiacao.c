#include<stdio.h>

struct tipoFiliacao
{
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};


struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao resultado;
    for(int i =0; i < 80; i++)
    {
        resultado.nome[i] = '\0';
        resultado.nomeMae[i] = '\0';
        resultado.nomePai[i] = '\0';
    }

    int i =0;
    int j =0;

    while(linha[i] != ',')
    {
        resultado.nome[j] = linha[i];
        i++;
        j++;
    }
    i++;//ta parado na virgula, vai pro próximo caractere de linha
    j = 0; //vai iniciar uma nova sting na struct
    while(linha[i] != ',')
    {
        resultado.nomeMae[j] = linha[i];
        i++;
        j++;
    }
    i++;
    j=0;

    while(linha[i] != '\0' && linha[i] != '\n')
    {
        resultado.nomePai[j] = linha[i]; 
        i++;
        j++;
    }

    return resultado;

}