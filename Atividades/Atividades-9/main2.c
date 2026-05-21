/*
[Questão 1] Escreva um algoritmo que usa a função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo,
a saída para n = 4 seria:
*
**
***
****
***
**
*

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int triangulo(int n){
    system("cls");
    for(int i = 1; i <= n; i++){
   
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }    


    for (int i = n; i > 0 ; i--)
    {
        
        for (int j = 0; j < i-1; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    

}
int main(void){
    int n;
    scanf("%d", &n);
    triangulo(n);

    return 0;
}