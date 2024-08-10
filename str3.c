#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    int maiorS= 0;
    char str[1000];
    for (int i =0; i<t; i++){
        scanf("%s", str);
        int maiorr= strlen(str);
        if(maiorr > maiorS){
            maiorS = maiorr;
        }
    }

    printf("%d", maiorS);

    return 0;
}