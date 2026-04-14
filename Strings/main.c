#include <stdio.h>

int main(void){

    char frase[10+1]; // + 1 caractere nulo ( \n )

    scanf("%s", &frase);
    printf(frase);
    return 0;
}