
#include <stdio.h>

int main()
{
    long long int q;
    scanf("%lld", &q);
    int soma;
    if (q %2 == 0) {
    soma = q;} else{ soma = 0;} 
    
    while (q != 0) {
    scanf("%lld", &q); 
    if (q %2 ==0) {
    soma += q; } 
    
    }
    
    printf("%d", soma);


    return 0;
}
