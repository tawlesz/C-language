#include <stdio.h>

// Questão 001

int main(){
    int vet[3], soma;
    printf("Digite tres valores inteiros");
    for (int i = 0; i < 3; i++){
        printf("\n Digite o valor %d : ", i+1);
        scanf("%d", &vet[i]);
    }
    soma = 0;
    soma += vet[0] + vet[1] + vet[2];
    printf("%d", soma);
    return 0;
}