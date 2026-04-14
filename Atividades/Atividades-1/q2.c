#include <stdio.h>

//questão 002

int main(){
    float real, res;
    printf("\n Digite um numero real para obter o quadrado: ");
    scanf("%f", &real);
    res = real * real;
    printf("%.2f", res);
}