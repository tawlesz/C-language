/*
[Questão 2] Faça um algoritmo receba um número inteiro positivo n e calcule o seu fatorial, n! por meio de uma função.
*/

#include <stdio.h>

int fatorial(int n){
    int fat = 1;
    for(int i = n; i > 0; i--){
        fat = fat * i;
    }
    return fat;
}

int main(void){
    int n;
    scanf("%d", &n);
    int fat = fatorial(n);
    printf("%d",fat);
    return 0;
}