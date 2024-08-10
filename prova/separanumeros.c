#include<stdio.h>

struct tipoData{
    int dia;
    int mes;
    int ano;

};

struct tipoPessoa{
    char nome[80];
    struct tipoData dtNacsimento;
};

struct tipoPessoa separaInfo(char nome[80], int dt_nassciemnto)
{
    struct tipoPessoa name;
    int i;
    int j=0;

    for(i =0; nome[i] != '\0'; i++)
    {
        name.nome[j] = nome[i];
        j++;
    }
    name.nome[j] = '\0';

    name.dtNacsimento.ano = dt_nassciemnto/10000;
    name.dtNacsimento.mes = (dt_nassciemnto %10000) / 100;
    name.dtNacsimento.dia= dt_nassciemnto%100;

    return name; 
}