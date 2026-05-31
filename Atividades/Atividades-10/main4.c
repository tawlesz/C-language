/*
Faça um algoritmo que usa uma função que receba dois números inteiros positivos por parâmetro e retorne a soma dos N números inteiros existentes entre eles, (incluindo estes).
Ex:
Entrada:
4
10

Saída:
49
// 4+5+6+7+8+9+10
*/

#include <stdio.h>

void somaPositivos(int a, int b){
    int s = 0;
    if (b >= a){
        for (int i = 0; b >= a; i++, a++){
            s += a;
        }
    }else{
        for (int i = 0; a >= b; i++, b++){
            s += b;
        }
    }
    printf("%d", s);
}

int main(void){
    
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    somaPositivos(a, b);

    return 0;
}