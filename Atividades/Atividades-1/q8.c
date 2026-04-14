#include <stdio.h>

int main(){
    
    float h, r, v;
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &h);
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &r);
    
    v = 3.141592 * (r * r ) * h ;
    printf("%f", v);
}