#include <stdio.h>

int main()
{
    long long int t = 0, t_temp = 0;
    int g = 0, n;

    scanf("%lld %d", &t, &g);

    for (int i = 0; i < g; i++)
    {
        t_temp = 0;
        n = 0;

        while (t_temp != t)
        {
            t_temp += (2 * n) - 1;
            n++;
        }

        if (t % 2 == 0)
        {
            n /= 2;
            t = ((2 * n) - 1) * ((2 * n) - 1);
        }

        else
        {
            t = ((2 * n) - 1) * ((2 * n) - 1);
        }

        printf("%lld\n", t);
    }

    return 0;
}