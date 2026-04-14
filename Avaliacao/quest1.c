#include <stdio.h>

#define T 2 // Declaração de constante

int main(void){
    float v1[T], v2[T], v3[T];
    for(int i = 0; i < 2; i++){
        printf("Digite um valor para v1[%d]\n", i);
        scanf("%f", &v1[i]);
    }
    for(int i = 0; i < 2; i++){
        printf("Digite um valor: \n");
        scanf("%f", &v2[i]);
    }
    for(int i = 0; i < 2; i++){
        v3[i] = (v1[i] * v2[i]);
    }
    for(int i = 0; i < 2; i++){
        printf("%.2f \n", v3[i]);
    }
    return 0;
}