// Quando declaramos uma variável, na memoria serão alocados: seu identificador, valor e endereço.
// Os ponteiros são váriaveis que guardam o endereço de memória de uma variável comum. 
// & operador de endereço | * operador de conteúdo | %x recuperar o endereço de uma variavel

#include <stdio.h>
#include <stdlib.h>
int main(void){
    system("cls");
    // int test;
    
    // int a = sizeof(test);
    // printf("%d", a);

    char letra = 'a';
    int num = 2;
    float r = 2.3;
    double d = 2.4;
    printf("%c\n", letra);
    printf("%x\n", &letra);
    printf("%x\n", &num);
    printf("%x\n", &r);
    printf("%x\n", &d);
    return 0;
    
}