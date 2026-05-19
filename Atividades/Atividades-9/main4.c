/*
[Questão 3] Faça um algoritmo que usa uma função que receba um número inteiro positivo impar N e retorneo fatorial duplo desse número. O fatorial duplo é definido como o produto de todos os números naturais ímpares de 1 até algum número natural ímpar N. Assim, o fatorial duplo de 5 é: 5!! = 1 * 3 * 5 = 15
*/

#include <stdio.h>

int duploFatorial(int n){
    int dupfat = 1;
    for(int i = n; i > 0; i--){

        if (!(i%2 == 0)){
            dupfat = dupfat * i;
        }
        
    }
    return dupfat;
}

int main(void){

    int n, res = 0;
    do{
        scanf("%d", &n);
    }while(n%2 == 0);

    res = duploFatorial(n);
    printf("%d", res);

    return 0;
}