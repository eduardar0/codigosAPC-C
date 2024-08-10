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
    struct tipoMusica musicas[100];
};
void pesquisarNomeMusica(char pesquisa[80] , struct tipoBanda bandas[50] , int n)
{
    int a =0;
    int i =0; 
    int j =0;
    for(i = 0; i < n; i++)//troca de banda
    {
        for(j =0; j < bandas[i].qnt; j++)//troca de musica
        {
            if(strcmp(pesquisa, bandas[i].musicas[j].nome)== 0) // ve se a musica dada existe nessa banda
            {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                a++;
                break;
            }

        }
    }
    if(a == 0)
    {
        printf("Musica não cadastrada\n");
    }
}