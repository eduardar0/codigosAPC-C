#include<stdio.h> 
int main (){
    int t; 
    scanf("%d", &t);
    int v[t]; 
    int maior =0; 
    for (int i= 0; i<t; i++){
        scanf("%d", &v[i]);
        }
        maior = v[0];
    for (int i=1; i < t; i++){
        if(maior < v[i]){
        maior = v[i];
        }
    }
    printf("Maior %d\n", maior);

    
    
}