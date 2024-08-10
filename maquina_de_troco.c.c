
#include <stdio.h>

int main()

{
    int p, v, q, c, s, d, f, u, tr; 
    int resto = 0;
    
    scanf("%d %d",&p , &v);
    q= 500; 
    c = 100;
    s = 50;
    d = 10;
    f = 5; 
    u = 1;
    tr = v-p; 
    
    
    q = tr / 500;
    resto = tr % 500;
    //fazer a divisão inteira pelo troco, pegar o resto e ir pra divisão iteira pelo proximo valor;
    c = resto / 100;
    //pega o resto da divisão anterior e faz a inteira
    resto = resto % 100;
    // resto por 100...
    s = resto/ 50;
    resto %= 50;
    d = resto / 10; 
    resto%= 10; 
    f = resto / 5;
    resto%= 5;
    u = resto/1;
    resto %= 1;
    

    printf("%d\n %d\n %d\n %d\n %d\n %d\n",q , c, s, d, f, u); 

    return 0;
}
