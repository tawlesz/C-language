/*
Elabore um algoritmo que usa uma função que receba três notas de um aluno como parâmetros e uma letra. Se a letra for 'A', a função deverá calcular a média aritmética das notas do aluno; se for 'P', deverá calcular a média ponderada, com pesos 5, 3 e 2, respectivamente.
*/

#include <stdio.h>
#include <stdlib.h>

float tresMedias(float n1, float n2, float n3, char letra){
    float res;

    switch (letra)
    {
    case 'A':
        res = (n1 + n2 + n3)/3;
        break;
    case 'P':
        res = ((n1 * 5)+(n2 * 3)+(n3 * 2))/10;
        break;
    default:
        break;
    }
    return res;
}

int main(void){
    system("cls");

    char l; float n1, n2, n3;
    scanf("%f", &n1); scanf("%f", &n2); scanf("%f", &n3);
    fflush(stdin);
    scanf("%c", &l);
    float res = tresMedias(n1, n2, n3, l);
    printf("%f", res);

    return 0;
}