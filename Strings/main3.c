#include <stdio.h>
#define T 15

int main(void){
    
    char caractere;
    char texto[T];
    int cont;

    printf("Digite seu primeiro nome: ");
    gets(texto);
    fflush(stdin);


    printf("Escolha um caractere para ser escolhido e contado: ");
    scanf("%c",caractere);

    for(int i = 0; i < T; i++){

        if (texto[i] == caractere){
            cont++;
        }
        
    }

    printf("\n\nO caractere %c, apareceu %d vezes na frase: %s\n ",caractere, cont, texto);
return 0;
}