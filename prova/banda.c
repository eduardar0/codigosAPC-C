#include<stdio.h>
#include<string.h>

struct tipoMusica
{
    char nome[80];
    int ano;
};//vai armazenar as musicas de uma certa banda 

struct tipoBanda
{
    char nome[80]; //nome da musica
    int qnt; //quantidade de musicas
    struct tipoMusica musicas[100]; //procurar as musicas dentro da truct tipoMudsuca
};
void pesquisarNomeMusica(char pesquisa[80] , struct tipoBanda bandas[50] , int n)
{
    int a =0; //variável pra encerrar a função 
    int i; // variável para contar a quantidade de bandas
    int j; //variável para contar a quantidade de musicas


    for(i =0; i<n; i++) //n (declarado na função), vai dizer a quantidade de bandas
    {
        for(j =0; j< bandas[i].qnt; j++) //ler as musicas em tipoBanda 
        {

            if(strcmp(pesquisa, bandas[i].musicas[j].nome)==0) //vai ver se a musica comparada em "pesquisa" é igual a alguma declarada em tipoBanda
            {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano); //imprime oq o exercicio ta pedindo
                a = 1; //muda o 'a' pra um parar o for
                break;
            }

        }
    }
        if(a == 0) // se a ainda for 0 (nao tem nenuma musica igual na struct) printa isso ai
        {
            printf("Musica nao cadastrada\n");
        }
}