// ler nome, idade, endereço -> struct

#include <stdio.h>
#include <stdlib.h>
#define T 5

struct infos{

    char nome[50];
    int idade;
    char e[50];

};

int main(void){

    struct infos informacao[T];

    int i;

    for(i = 0; i < T; i++){
        system("cls");
        printf("Digite o seu nome: ");
        fgets(informacao[i].nome, 50, stdin);
        printf("Digite a idade: ");
        scanf("%d", &informacao[i].idade);
        fflush(stdin);
        printf("Digite seu endereço completo (número, logradouro, bairro, cidade, estado)");
        fgets(informacao[i].e[50], 50, stdin);

    }

    return 0;
    
}