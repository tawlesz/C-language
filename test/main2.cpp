#include <stdio.h>

typedef struct{
    int cod, n;
    float ppu;
}p;

int main() {
    p product[2];
    float v[2], total;
    for(int i = 0; i < 2; i++){
        scanf("%d", &product[i].cod);
        scanf("%d", &product[i].n);
        scanf("%.2f", &product[i].ppu);
        v[i] = (product[i].n * product[i].ppu);
    }    
    total = v[0] + v[1];
    printf("TOTAL A PAGAR: R$ %.2f\n", total);
}