#include<stdio.h>

struct tipoFiliacao
{
    char pessoa[80];
    char mae[80];
    char pai[80];

};

struct tipoFiliacao separaLinhaCSV(char linha[240])
//o struct tipoFiliação é como se fosse um "int", uma forma de declarar dados que EU pré defini.
{
    struct tipoFiliacao resultado; //armazena os resultados

    for(int i =0; i < 80; i++)
    {
        resultado.pessoa[i] = '\0'; //cria uma string vazia de 80 espaços pra cada nome
        resultado.mae[i] = '\0';
        resultado.pai[i] = '\0';
    }

    int i =0; //vai contar os caractres ate achar a virgula
    int j =0; //vai adicionar o nome escrito em linha[i] na variavel resultado.pessoa/pai/mae.

    while(linha[i] != ',') //vai procurar a virgula pra separar os nome
    {
        resultado.pessoa[j] = linha[i];
        i++;
        j++;
    }
    i++;
    j=0;
    while(linha[i] != ',')
    {
        resultado.mae[j] = linha[i];
        i++;
        j++;
    }
    i++;
    j = 0;
    while(linha[i] != '\0' && linha[i] != '\n') //finaliza a leitura.
    {
        resultado.pai[j] = linha[i];
        i++;
        j++;
    }
    return resultado;
}

//REFAZER ESSE CODIGO!!!!