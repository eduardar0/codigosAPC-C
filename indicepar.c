#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int vet[t];
    for(int i=0; i<t; i++){
        scanf("%d", &vet[i]);
    }
    int pares[t];
    int impares[t];
    int posPar=0;
    int posImp=0;
    for(int i=0; i<t; i++){
        if(vet [i] %2==0){
            pares[posPar] =i;
            posPar ++;
        }
        else{
            impares[posImp] = i;
            posImp++;
        }
    }


    for(int i =0; i<posPar; i++){
        if(i ==0){
            printf("%d", pares[i]);
        }
        else{
            printf(" %d", pares[i]);
        }
        
    }

    printf("\n");
    for(int i =0; i<posImp; i++){
        if(i ==0){
            printf("%d", impares[i]);
        }
        else{
            printf(" %d", impares[i]);
        }
        
    }




    return 0;
}