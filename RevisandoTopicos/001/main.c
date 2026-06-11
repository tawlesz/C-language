// ? ESTE DIRETÓRIO SERVIRÁ PARA DESENVOLVER REVISÕES CASO NECESSÁRIO.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  system("cls");
  
    int n = 34;
    printf("%d\n", n);
    printf("%p\n", &n); // retorna o endereço da variável.

    int *p;
    p = &n;
    printf("%p\n", p);
    printf("%d\n", *p);
  return 0;
}