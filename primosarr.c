#include <stdio.h>

int main()
{
    int t = 0, v = 1, n = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        v = 1;

        scanf("%d", &n);

        while (n != 0 && v == 1)
        {
            if (n == 1)
            {
                v = 0;
            }
            
            for (int j = 2; (j < (n/2)) && v == 1; j++)
            {
                if (n % j == 0)
                {
                    v = 0;
                }
            }

            n /= 10;
        }

        if (v == 1)
        {
            printf("S\n");
        }

        else
        {
            printf("N\n");
        }
    }

    return 0;
}