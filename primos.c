#include<stdio.h>

int main(){
    int p; //1234
    scanf("%d",&p);
    while(p !=0) {
        p /= 10;
        p %= 10;
        int con =0 ;
        for (int i =1; i <= p; i++) {
            if (p % i ==0 ) {
                con ++;     
            }
        }
        if (con == 2) {
            printf("S\n");
        }
        else {
            printf("n\n");
        }
        printf("con %d\np=%d\n", con, p);
        
    }

}