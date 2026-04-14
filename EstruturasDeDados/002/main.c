#include <stdio.h>
#define T 5

int main(void){

    int n[T];

    for (int i = 0; i <= T-2; i++){
        printf("Digite um valor: \n");
        printf(">>> ");
        scanf("%d", &n[i]);
    }
     
    n[T-1] = 0;
    for(int i = 0; i <= T-2; i++){
        n[T-1] += n[i];
    }

    printf("= %d", n[T-1]);
    return 0;
}