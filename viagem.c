#include<stdio.h>
int main(){
    int dia=1;
    int n; 
    while(scanf("%d", &n) != EOF) {
        int codigo, nota, melhorC= -1; 
        int melhorN =-1;
        for (int i= 0; i <n; i++){
            scanf("%d %d", &codigo, &nota);
            if (nota > melhorN || (nota == melhorN && codigo < melhorC)){
                melhorN= nota;
                melhorC = codigo;
            }

        }
        printf("dia %d\n", dia); 
        printf("%d\n \n", melhorC);
        dia++;
    }
    return 0;
}


/*#include <stdio.h>

int main() {
    int dia = 1;
    int R;
    while (scanf("%d", &R) != EOF) {
        int codigo, nota, melhor_codigo = -1, melhor_nota = -1;
        for (int i = 0; i < R; ++i) {
            scanf("%d %d", &codigo, &nota);
            if (nota > melhor_nota || (nota == melhor_nota && codigo < melhor_codigo)) {
                melhor_nota = nota;
                melhor_codigo = codigo;
            }
        }
        printf("Dia %d\n", dia);
        printf("%d\n\n", melhor_codigo);
        dia++;
    }
    return 0;
}
*/