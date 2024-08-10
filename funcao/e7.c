#include<stdio.h>
double calculaVelocidadeMedia(int tempoA, int tempoB, double distanciaKM)
{
    return distanciaKM / (((double) tempoB - tempoA)/ 3600);
    //s / t
}
/*int main(){
    double p = calculaVelocidadeMedia(54169, 57346, 170.0);
    printf("%lf", p);
}*/
//segunda funcao

int levouMulta(int tempoA, int tempoB, double distanciaKM, double velocidadeMax)
{
    if(calculaVelocidadeMedia(tempoA, tempoB, distanciaKM) > velocidadeMax)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}