
#include <stdio.h>

int main()
{
    long long int cpf;
    
    scanf("%lld",&cpf); 
    
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9, dig10, dig11; //11 pois o cpf tem 11 numeros.
    
    //ex entrada; 12345678909
    
    dig11 = cpf %10; //pegar o ultimo numero, no caso o 9.
    cpf /=10; //1234567890 
    
    dig10 = cpf % 10; //vale 0. 
    cpf /= 10; 
    
    dig9 = cpf %10; // vale 9. 
    cpf/=10;
    
    dig8 = cpf % 10; //vale 8.
    cpf /= 10;
    
    dig7 = cpf % 10; //vale 7
    cpf/=10; 
    
    dig6 = cpf%10;//vale6 
    cpf /=10; 
    
    dig5= cpf %10; //vale 5 
    cpf /= 10; 
    
    dig4 = cpf % 10; // vale 4 
    cpf /= 10; 
    
    dig3 = cpf % 10; //vale 3
    cpf /= 10; 
    
    dig2 = cpf % 10; //vale 2
    cpf /=10; 
    
    dig1 = cpf % 10;

    //printf("%d%d%d%d%d%d%d%d%d%d%d", dig11, dig10, dig9, dig8, dig7, dig6, dig5, dig4, dig3, dig2, dig1);
    
    //soma dos numeros multiplicados de 9-2; 
    
    int soma; 
    soma = dig1 * 10 + dig2 * 9 + dig3 * 8 + dig4 * 7 + dig5 * 6 + dig6 * 5 + dig7 * 4 + dig8 * 3 + dig9 * 2; 
    //so os 9 pra calcular o primeiro dig ver 
    
    int dv; 
    dv = 11 - (soma % 11); // 11 menos o resto da divisão por 11.
    if (dv >= 10) {
        dv = 0; 
    }
    
    soma = dig1 *11 + dig2 * 10 + dig3 * 9 + dig4 * 8 + dig5 *7 + dig6 *6 + dig7 *5 + dig8 * 4 + dig9 *3 + dv*2; 
    //segundo num ver
    
    int dv2; 
    dv2 = 11 - (soma % 11); 
    if ( dv2 >= 10) 
    { dv2=0; }
    
    if (dv == dig10 && dv2 == dig11) {
        printf("Válido\n");
    } else {printf("Inválido\n");}


    return 0;
    
}
