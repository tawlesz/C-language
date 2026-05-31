/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:

hipotenusa = sqrt(pow(a,2) + pow(b,2))

Faça um algoritmo que usa função que receba os valores de a e b e calcule o valor da hipotenusa através da equação.
*/

#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float a, float b)
{
    float hipotenusa;
    hipotenusa = sqrt(pow(a, 2) + pow(b, 2));
    return hipotenusa;
}

int main()
{

    float a, b, res;
    scanf("%f", &a);
    scanf("%f", &b);
    res = calcularHipotenusa(a, b);
    printf("resultado: %.2f", res);

    return 0;
}