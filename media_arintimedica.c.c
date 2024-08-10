#include <stdio.h>

int main()
{
    float y, x2, x1, p1, p2;
    scanf("%f",&y);
    scanf("%f",&x2);
    scanf("%f %f", &p1, &p2);
    x1 = ((y*p1)+(y*p2)-(x2*p2))/p1;
    printf("%f", x1);
    return 0;
}
