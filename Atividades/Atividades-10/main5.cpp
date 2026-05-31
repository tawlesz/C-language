/*
Faça um algoritmo que usa uma função que recebe um número inteiro N como parâmetro, calcule e retorne o resultado da seguinte expressão:

S = (2/4) + (5/5) + (10/6) + ... + ((pow(N,2) + 1)/(N + 3)),
Atenção: Reticências na expressão acima indica padrão de comportamento, analise quando N = 1 ou 2 ou 3 e então observe a expressão e perceba que é um somatório.
*/

#include <stdio.h>
#include <math.h>

float calculaExpressao(int N){
    float S;
   // S = (2/4) + (5/5) + (10/6) + ... + ((pow(N,2) + 1)/(N + 3));
    for (int i = 1; i <= N; i++){
        S += (double)(pow(i, 2) + 1)/(i + 3);
    }

    return S;
};

int main(void){
    
    int a; float res;
    scanf("%d", &a);
    res = calculaExpressao(a);
    printf("%.2f", res);

    return 0;
}