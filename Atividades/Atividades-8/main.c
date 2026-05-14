/*
Elabore um algoritmo que usa uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
*/

#include <stdio.h>

int dobrarIteiro(int n){return(n*2);}

int main(){

    int n, res;
    scanf("%d", &n);
    res = dobrarIteiro(n);
    printf("%d",res);
    
}