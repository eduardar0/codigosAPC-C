#include<stdio.h>
int contarEstrelas(int qnt, int abertura)
{
    int star;
    int retorno=0;
    for(int i =0; i < qnt; i++)
    {
        scanf("%d", &star);

        if(abertura * star>=40000000)
        {
            retorno ++;
        }
    }
    return retorno;
}