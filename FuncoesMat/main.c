#include <stdio.h>
#include <math.h>

/* pow (potenciação); 
sqrt (radiciação); 
floor (retorna parte inteira, elimina parte fracionária); 
ceil (elimina casa decimal e soma mais um, pegando o proximo valor inteiro); 
sin (graus para radianos); 
log e log10 (retorna o valor do logaritmo nas respectivas bases - 2 e 10); 
sin/cos/tan (seno, cosseno, tangente); */

struct aluno{

    int idade;
    char nome[30];

};

int main(void){
    struct aluno a;
    scanf("%i", &a.idade);
    printf("a idade é %i", a.idade);
    float n;

    puts("Digite um valor a ser elevado ao quadrado:  ");
    scanf("%f", &n);
    printf("O numero %.0f elevado ao quadrado e igual a: %.0f", n, pow(n, 2));

    return 0;
}