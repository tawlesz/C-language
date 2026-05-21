#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    char *p;
    char x = 'c';
    p = &x;
    printf("valor da variável x === %c\n", x);
    printf("valor do poteiro p === %p\n", p);
    printf("endereço de p === %x\n", &p);

    return 0;
}