// Declaração apos o main:

#include <stdio.h>

// assinatura da função
int soma2(int x, int y);

int main(void){

    int a, b, m;
    scanf("%d", &a);
    scanf("%d", &b);
    m = soma2(a, b);
    printf("A SOMA É: %d", m);

    return 0;
}

int soma2(int x, int y){
    return(x + y);
    /*
        int a;
        a = x + y;
        printf("O valor somado é: %d\n", a);
    */
}