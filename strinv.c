#include<stdio.h>
int main(){
    char str[101];
    scanf("%[^\n]s", str);
    char caractere;
    int ascs;
    int tmw =0;
    while(str[tmw] !=0){
        tmw++;
    }
    for(int i =tmw -1; i>=0; i--){
        caractere = str[i];
        ascs = caractere;
        printf("%c - %d\n", caractere, ascs);
    }

    return 0;
}