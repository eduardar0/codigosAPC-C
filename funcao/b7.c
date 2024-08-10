#include<stdio.h>
int faz_conta_direito(int parcelas, char op)
{
    int result;
    int valor;
    scanf("%d", &result); //primero numero
    for(int i=1; i< parcelas; i++)//le os outros numros a partir do elemento '1', ja que o zero ja foi lido.
    {
        scanf("%d",&valor);
        if(op == '+')
        {
            result += valor;
        }
        else if(op == '-')
        {
            result -= valor;
        }
    }
    return result;
}

