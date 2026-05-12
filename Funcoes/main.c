#include <stdio.h>

int soma2(int x, int y){
    return(x + y);
}

int main(void){

    int a, b, m;
    scanf("%d", &a);
    scanf("%d", &b);
    m = soma2(a, b);
    printf("A SOMA É: %d", m);

    return 0;
}