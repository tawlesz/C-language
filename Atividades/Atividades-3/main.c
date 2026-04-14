#include <stdio.h>

int main(){

    int v1[10], maior, menor;

    maior = 0;
    menor = 0;

for(int i = 0; i < 10; i++){
        printf("Digite um valor para v1[%d]", i);
        scanf("%d", &v1[i]);
        if (v1[i] >= maior ) {
            maior = v1[i];
        }else if(v1[i] <= 0){
            menor = v1[i];
        }
    }

    printf("Maior valor fornecido: %d \n", maior);
    printf("Menor valor fornecido: %d \n", menor);

    return 0;
}