/*
    Aritimética de ponteiros: não tem relação com operação de valores, mas sim com o deslocamento em blocos na memória.

*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    system("cls");
    int n1 = 3;
    int *pti = &n1;
    printf("O ponteiro pti antes da operação: %d\n", pti);
    pti += 1;
    printf("O ponteiro pti após da operação: %d\n", pti);

    return 0;
}