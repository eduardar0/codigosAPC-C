
#include <stdio.h>

int main()
{
    long long int h, m , s; 
    scanf("%lld", &h); 
    m = h*60; 
    s = h*3600; 
    printf("%lld\n%lld\n",m,s);

    return 0;
}
