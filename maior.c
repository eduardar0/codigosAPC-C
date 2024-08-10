#include<stdio.h>
int main(){
    int t; 
    scanf("%d", &t); 
    int vet[t];
    for (int i = 0; i<t; i++){
        scanf("%d", &vet[i]);
    }
    int maior = vet[0];
    for(int i = 1; i<t; i++){
        if (maior > vet[i]){
            maior = vet[i]; 
        }
        
    }
    printf("Maior %d\n", maior);


    return 0;

}