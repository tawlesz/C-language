/*
     o valor de uma função retornada é uma cópia ex: x = somaDois(v) // x recebe a cópia do retorno da função (duas posições de memória diferentes)

    podemos passar também por referência, com ponteiros   
*/

#include <stdio.h>
#include <stdlib.h>

int referencia(int *p){
    *p += *p;
}

int main(void){
    int v = 12;
    printf("valor da variável %d antes da função por referência\n", v);
    referencia(&v);//passa o endereço de memódia do valor
    printf("valor da variável %d após da função por referência\n", v);
    return 0;
}