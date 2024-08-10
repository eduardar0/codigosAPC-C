
 #include <stdio.h>
 int main()
 {
    int num;
    scanf("%d", &num); //recebe 6 digitos em uma variavel

    int n1 = num/100000;
    num = num%100000; 

    int n2 = num/10000;
    num = num%10000;

    int n3 = num/1000;
    num = num%1000;

    int n4 = num/100;
    num = num%100;

    int n5 = num/10;
    num = num%10;
    int n6= num;

    int S= (n6* 2 + n5* 3 + n4* 4 + n3* 5 + n2* 6 + n1* 7);
    int dv = 11-(S%11);

    printf("%d",dv);

    // printf("%d %d %d %d %d %d",n1, n2, n3, n4, n5, n6);
 }