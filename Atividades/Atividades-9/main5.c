/*
[Questão 4] Faça um algoritmo que receba um número inteiro positivo n e retorne o fatorial quádruplo desse número
usando uma função. O fatorial quádruplo de um número n é dado por: (2n)!/(n!)
*/

#include <stdio.h>

int quadfatorial(int n){
    int quadfat, v[2] = {1,1};

    for (int i = n * 2; i > 0; i--)
    {
        v[0] = v[0] * i;
    }
    for (int i = n; i > 0; i--)
    {
        v[1] = v[1] * i;
    }
    
    quadfat = v[0]/v[1];
    return quadfat;
}

int main(void){
    int n, res;
    do{
        scanf("%d", &n);
    }while(n < 1);
    res = quadfatorial(n);
    printf("%d", res);

    return 0;
}