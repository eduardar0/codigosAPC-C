#include<stdio.h>

struct tipoLogradouro
{
    char tipo[80];
    char nome[80];
    char complemento[80];
}; 

void criaLinhaCSV(struct tipoLogradouro info , char linha[240])
{
    int i;
    int j;
    int k;

    for(i =0; info.tipo[i] != '\0'; i++)
    {
        linha[i]=info.tipo[i];
    }
    linha[i++] = ';';

    for(j =0; info.nome[j]; j++, i++)
    {
        linha[i] = info.nome[j];
    }
    linha[i++] = ';';

    for(k =0; info.complemento[k] != '\0'; k++, i++)
    {
        linha[i] = info.complemento[k];
    }
    linha[i] = '\0';

}
