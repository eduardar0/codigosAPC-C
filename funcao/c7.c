#include <stdio.h>
int validaPeso(double pesoKg)//double é uma variante do float
{
    if(pesoKg < 0 || pesoKg > 1.7e308)
    {
        return 0;//inválido
    }
    else{
        return 1; //valido
    }
}
void fazGrama(double pesoKg)
{
    double gramas = pesoKg * 1000;
    printf("%.4f\n", gramas);
}
void fazTonelada(double pesoKg)
{
    double ton = pesoKg / 1000;
    printf("%.4f\n", ton);
}
/*int validaPeso(double pesoKg) {
    // Verifica se o peso é válido
    if (pesoKg < 0 || pesoKg > 1.7e308) {
        return 0; // Peso inválido
    } else {
        return 1; // Peso válido
    }
}

void fazTonelada(double pesoKg) {
    // Converte e exibe o peso em toneladas
    double pesoTon = pesoKg / 1000.0;
    printf("%.4f\n", pesoTon);
}

void fazGrama(double pesoKg) {
    // Converte e exibe o peso em gramas
    double pesoG = pesoKg * 1000.0;
    printf("%.4f\n", pesoG);
}*/