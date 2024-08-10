#include <stdio.h>

int main() {
   int q; 
   scanf("%d", &q);
   int i = 0;
   int soma = 0; 
   
   for (int i = 0; i<q; i++) {
    int num;
   scanf("%d", &num);
   soma += num;
   
  }
   
  printf("%d", soma);
}
