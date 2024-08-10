#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t];
    for (int i =0; i <t; i++){
        scanf("%d", &vet[i]);
    }
    int maior = vet[0];
    int maior2 = vet[0];
    int maior3 = vet[0];
    for(int i=0; i<t; i++){
        if (vet[i]<maior){
            maior3 = maior2; 
            maior2 = maior;
            maior = vet[i];
        }
        else if(vet[i]<maior2 && vet[i] != maior ) {
            maior3 = maior2; 
            maior2 = vet[i];
        }
        else if(vet[i] < maior3 && vet[i] != maior2 && vet[i] != maior){
            maior3 = vet[i];
        }
    }
    printf("%d\n %d\n ", maior2, maior3);

    return 0;
}

