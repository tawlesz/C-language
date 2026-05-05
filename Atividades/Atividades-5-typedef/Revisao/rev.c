#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

typedef struct{

    int idade;
    char nome[TAM];

}pessoa;

int main(void){

    pessoa thalles;
    printf("preencha com os dados corretamente:\n");
    puts("Nome: ");
    fgets(thalles.nome, 10, stdin);
    
    puts("Idade: ");
    scanf("%d", &thalles.idade);

    system("cls");

    printf("a pessoa %s tem %d anos.", thalles.nome, thalles.idade);
    return 0;

}