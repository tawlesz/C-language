/*
Faça um algoritmo que usa a função que recebe 3 números inteiros como parâmetro, representando horas, minutos e segundos, calcule-os e devolva-os em segundos.
*/
#include <stdio.h>

int horasEmSegundos(int h, int m, int s){return (h * 3600 + m * 60 + s) ;}

int main(){

    int h, m, s, res;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &h);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &m);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &s);

    res = horasEmSegundos(h, m, s);
    printf("%d segundos calculados", res);

}