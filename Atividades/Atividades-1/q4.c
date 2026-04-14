#include <stdio.h>

int main(){
    float c, f;
    printf("Digite a temperatura em graus C: ");
    scanf("%f", &c);
    f = ((c * ((float)9/5))+32);
    printf("%.2f", f);
    return 0;
}