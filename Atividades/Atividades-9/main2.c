/*
[Questão 1] Escreva um algoritmo que usa a função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:
*
**
***
****
***
**
*

*/

#include <stdio.h>

int triangulo(int n){
    int h = 2*n-1;
    int w = n;

    for(int i = 0; i < h; i++){
        printf("*");
        
    }
}

int main(void){
    int n;
    scanf("%f", &n);
    triangulo(n);

    return 0;
}