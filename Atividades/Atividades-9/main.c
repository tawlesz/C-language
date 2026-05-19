/*#Faça um algoritmo que usa uma função para o cálculo do volume de uma esfera, sendo que o raio é passado por parâmetro.
V = 4/3 * PI * pow(R,3)*/

#include <stdio.h>
#include <math.h>
#define PI 3.14

int volume(float r){
    float v = 4.0/3 * PI * pow(r, 3);
    return v;
}

int main(void){
    float r;
    printf("Digite o valor do seu raio: ");
    scanf("%f", &r);
    float v = volume(r);
    printf("%f.5", v);
    return 0;
}