
#include <stdio.h>

int main()
{
    int bal;
    int cont; 
    scanf("%d", &bal);
    cont = 0; 
    int i;
    
    for(bal; cont<bal; cont ++) {
        if (cont %2 ==0) {
            printf("Thums Thums Thums\n");
        } else (printf("Thums Thums Thums Thums Thums Thums\n"));
        
      //printf("%d", bal);
    }
    
    return 0;
}
