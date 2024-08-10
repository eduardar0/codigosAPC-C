#include <stdio.h>
double exp_natural (int x , int n)
{
    double res=0;
    for(int i=1; i<=n; i++)
    {
        double div=i, num=x;
        for(int o=i-1; o>0; o--)
        {
            div=div*o;
        }
        for(int p=1; p<i; p++)
        {
            num=num*x;
        }
        res=res+(num/div);
    }
    res++;
    return res;
}

/*int main()
{
    double n=exp_natural(2, 7);
    printf("%lf\n", n);
    double m=exp_natural(3, 4);
    printf("%lf\n", m);
    return 0;
}*/