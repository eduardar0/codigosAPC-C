#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t], piu[t];
    for(int i =0; i<t; i++){
        scanf("%d", &vet[i]);
    }
    for(int i =0; i<t; i++){
        scanf("%d", &piu[i]);
    }
    int engual = 1;
    for(int i =0; i<t; i++){
    if(vet[i] != piu[i]){
        engual =0;
        break;
        }
    
    }
    if(engual == 1){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
    return 0;
    }    

