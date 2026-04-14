#include <stdio.h>

int main(){
    float real, res;
    printf("\n Digite um numero real: ");
    scanf("%f", &real);
    res = (real / 5);
    printf("%.2f", res);
    return 0;
}