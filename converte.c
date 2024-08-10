#include<stdio.h>
int main(){
    char tamanho[] = "eSSe eh uM exemplo";
    //contar o tamnho da string
    int q =0;
    while(tamanho[q] !='\0'){
        q++;
    }
    printf("Esse é o tamnho da string: %d\n", q);
    for(int i =0; i<q; i++){
        if(tamanho[i] >= 'a' && tamanho[i] >= 'z'){//condução para um caractere ser minusculo
        /*Usar a tabela ascs agr: 
        um caracetere inusculo recebe 96 da tabela: 
        'a' = 96; 
        um caractere maiusculo recebe 65 na tabela:
        'A' = 65;
        para converter de maíusculo para minusculo, basta pegar o valor da diferença de 96 - 65 =32 e diminuir de 96*/
        printf("%c", tamanho[i] - 32);
        }
        else{
            printf("%c", tamanho[i]);
        }
    }
    return 0;
}