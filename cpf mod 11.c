#include <stdio.h>

int main()
{
    unsigned long long int cpf; 
    int men; 
    scanf("%llu", &cpf); 
    men = cpf / 100; 
    int ver; 
    ver = men / 100000000;
    ver *=10;
    
    int ver2; 
    ver2 = men % 100000000;
    ver2 /= 10000000;
    ver2 *= 9; 
    
    int ver3; 
    ver3 = men % 10000000;
    ver3 /= 1000000;
    ver3 *= 8;
    
    int ver4; 
    ver4 = men % 1000000;
    ver4 /= 100000;
    ver4 *= 7;
   
   int ver5; 
   ver5 = men % 100000;
   ver5/= 10000;
   ver5*= 6;
   
   
   int ver6; 
   ver6 = men % 10000;
   ver6/= 1000;
   ver6*= 5;
   
   
   int ver7; 
   ver7 = men % 1000;
   ver7/= 100;
   ver7*= 4;
   

   int ver8; 
   ver8 = men % 100;
   ver8/= 10;
   ver8*= 3;

   
   int ver9; 
   ver9 = men % 10;
   ver9/= 1;
   ver9*= 2;
   
   printf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n ",ver, ver2, ver3, ver4, ver5, ver6, ver7, ver8, ver9);   
   
   
    
    
    
    
    
    
    
    
    

    return 0;
}
