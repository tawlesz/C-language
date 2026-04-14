#include <stdio.h>

int main(void){

    int vet[10];
    int somaCont = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        printf(">>> ");
        scanf("%d", &vet[i]);

        if (( vet[i]%2 ) == 0){
            somaCont++;
        }
        
    }

    printf("Foram digitados %d valores pares.", somaCont);

    return 0;
}