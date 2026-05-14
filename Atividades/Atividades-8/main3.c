/*
Faça um algoritmo que usa uma função para o cálculo do volume de uma esfera, sendo que o raio é passado por parâmetro.
V = 4.0/3 * PI * pow(R,3)
*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

float calcularVolume(float raio){return(4/3*PI * pow(raio, 3));}

int main(){

    float raio, res;
    printf("Digite o raio da esfera, para calcular seu volume: ");
    scanf("%f", &raio);
    res = calcularVolume(raio);
    printf("%.4f eh o volume.", res);

}