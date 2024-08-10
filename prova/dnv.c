#include<stdio.h>
#include<string.h>

struct tipoMusica
{
    char nome[80];
    int ano;
};
struct tipoBanda 
{
    char nome[80];
    int qnt;
    struct tipoMusica musicas [100];
};

void pesquiarNomeMusica(char pesquisa[80], struct tipoBanda bandas[80], int n )

{
    int a =0;
    int i, j =0;
    for(i =0; i < n; i++)
    {
        for(j = 0; j< bandas[i].qnt; j++)
        {
            if(strcmp(pesquisa, bandas[i].musicas[j].nome)==0)
            {
                printf("%s : ano %d", bandas[i].nome, bandas[i].musicas[j].ano);
            }
        }
        if(a == 0)
        {
            printf("Musica nao encontrada\n");
        }
    }
}