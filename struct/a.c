#include<stdio.h>
#include <math.h>
struct tipoPonto
{
    int x;
    int y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb)
{
    double distancia = sqrt(pow((pb.x - pa.x),2) + (pa.y - pa.y));
    return distancia;
}
