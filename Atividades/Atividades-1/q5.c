#include <stdio.h>

int main(){
    float c, f;
    printf("Digite a temperatura em graus F: ");
    scanf("%f", &f);
    c = ((5 * (f - 32.0)/9.0));
    printf("%.2f", c);
    return 0;
}