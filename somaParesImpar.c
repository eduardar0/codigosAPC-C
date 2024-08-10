#include<stdio.h>
int main(){
    int num;
    int soma =0 ;
    int soma2 = 0; 
    scanf("%d", & num);
    if (num %2 ==0){
        soma = num;
    } else{soma2 = num;}

    while (num != 0){
        scanf("%d", &num);
        if (num %2 ==0) {soma = soma + num;}
        else if (num %2 !=0) {soma2 += num;}
        


    }

    printf("%d %d", soma, soma2);
}