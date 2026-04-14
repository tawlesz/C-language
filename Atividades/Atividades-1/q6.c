#include <stdio.h>

int main(){
    float c, k;
    printf("Digite a temperatura em graus K: ");
    scanf("%f", &k);
    c = (k - 273.15);
    printf("%.2f", c);
    return 0;
}