#include <stdio.h>

int main(void){
    int vet[50];
    int i;
    for (i = 0; i < 50; i++){
        vet[i] = ((i+5*i) % (i + 1));
    }

    for (i = 0; i < 50; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}