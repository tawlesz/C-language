// Quando declaramos uma variável, na memoria serão alocados: seu identificador, valor e endereço.
// Os ponteiros são váriaveis que guardam o endereço de memória de uma variável comum. 
// & operador de endereço | * operador de conteúdo | %x recuperar o endereço de uma variavel

#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    int a;

    char letra = 'a';
    int num = 2;
    float r = 2.3;
    double d = 2.4;
    printf("\n");
    printf("%x\n", &letra);
    printf("%d bytes\n", a = (sizeof(letra)));
    printf("\n");
    printf("%x\n", &num);
    printf("%d bytes\n", a = (sizeof(num)));
    printf("\n");
    printf("%x\n", &r);
    printf("%d bytes\n", a = (sizeof(r)));
    printf("\n");
    printf("%x\n", &d);
    printf("%d bytes\n", a = (sizeof(d)));
    return 0;
    
}