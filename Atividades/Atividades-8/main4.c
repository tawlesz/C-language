/*
Faça um algoritmo que usa a função que recebe dois valores numéricos e um símbolo. Este símbolo representará a operação aritmética que se deseja efetuar com os números. Se o símbolo for + deverá ser realizada uma adição, se for - uma subtração, se for * será efetuada uma multiplicação e se for / uma divisão, lembrando que neste último o denominador não pode ser zero. Qualquer outro símbolo diferentes dos citados, deve solicitar novamente.
*/

#include <stdio.h>
#include <string.h>
float fazerOperacao(float x, float y, char op){

    char s = '+', m = '-', v = '*', d = '/';

    if(op == s){
        return(x+y);
    }
    if(op == m){
        return(x-y);
    }
    if(op == v){
        return(x*y);
    }
    if(op == d){
        
        while(y == 0){
      //      fflush(stdin);
            printf("Digite um valor diferente de 0 para o denomidador: ");        
            scanf("%f", &y);
        }
        return(x/y);
    }

}

int main(){
    float x, y, res; 
    char op;
    fflush(stdin);
    printf("Digite dois valores a serem calculados: ");
    scanf("%f",&x);

    fflush(stdin);
    scanf("%f", &y);

    fflush(stdin);
    printf("Digite a operação desejada ('/' '*' '-' '+'): ");

    fflush(stdin);
    scanf("%c", &op);
    res = fazerOperacao(x, y, op);
    printf("O resultado eh: %.1f", res);

}