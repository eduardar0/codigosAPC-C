#include<stdio.h>
int main() {
    int p; 
    scanf("%d", &p);

    while ( p !=0) {
        int div =1;
        while (p > 10) {
            int part= p;
            while (part > 0) {
                printf("%d", part);
                int con =0;
                for (int i =1; i<=part; i++){
                    if(p % i==0){
                        con++;
                    }
                    if(i==2){
                    printf("Primo\n");
                }
                else {
                    printf("N Primo\n");
                }
                /*
                }
                if(i==2){
                    printf("Primo\n");
                }
                else {
                    printf("N Primo\n");
                }*/
                
            }

        }
    }
}