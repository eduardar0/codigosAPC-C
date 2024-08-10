#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t];
    int valor;

    for (int i=0; i<t; i++){
        scanf("%d", &vet[i]);   
    }

    scanf("%d", &valor);

    for(int i=0; i<t; i++){
        if(vet[i] == valor){
            printf("pertence");
            return 0;
        }
    }
    printf("nao pertence");

    

    return 0;
    

}