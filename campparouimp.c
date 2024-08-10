
#include <stdio.h>

int main()
{
    int e, j1, j2;
    char A, B;
    scanf("%d %d %d", &e, &j1, &j2);
    int win1;
    if ((e == 0) && (j1 % 2 == 0))
    {
        printf("A\n");
        win1 = A;
    } else if ((e == 0) && (j1 % 2 != 0)){
        printf("B\n");
        win1 = B;
    } else if ((e == 1) && (j1 % 2 == 0)) 
    { printf("B\n");
    win1 = B;
        } else {printf("A\n");
            win1 = A;
        }
    int win2;
    char C, D; 
    int f , j3, j4; 
    scanf("%d %d %d", &f, &j3, &j4);
    
    if ((f==0) && (j3 %2 ==0)) 
    {
        printf("C\n");
        win2 = C;
    } else if ((f == 0) && (j3 % 2 !=0)) {
        printf("D\n");
        win2 = D;
    } else if ((f == 1) && (j1 %2 == 0)) {
        printf("D\n");
        win2 = D;
    } else {printf("C\n"); 
      win2 = C; }
    
 
    
    
    

    return 0;
}
