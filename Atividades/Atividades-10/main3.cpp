/*
Faça um algoritmo que usa uma função chamada desenhaLinha. Ele deve desenhar uma linha na tela usando vários símbolos de um determinado caractere definido pelo usuário. A função recebe por parâmetro quantos e qual símbolo deverá ser mostrado. 
Ex:
Entrada:
15
#

Saída:
###############
*/

#include <stdio.h>
#include <stdlib.h>

void desenhaLinha(int r, char s){
    system("cls");
    for(int i = 0; i < r; i++){
        printf("%c", s);
    }

}

int main(void){

    int reps; char s;
    printf("quantas reps?");
    scanf("%d", &reps);
    printf("qual caractere?");
    fflush(stdin);
    scanf("%c", &s);
    desenhaLinha(reps, s);

    return 0;
}