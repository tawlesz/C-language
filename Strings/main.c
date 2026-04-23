#include <stdio.h>

int main(void){

// Manipulação de strings com scanf:

    /*
    char frase[10]; // + 1 caractere nulo ( \n )


    printf("Digite algo na tela (com leitura convencional): \n");
    scanf("%s", frase); // deixa você ler mais posições do que o vetor comum, e impossibilita espaços.
    printf("Resultado: %s\n\n", frase);
    fflush(stdin); 


    printf("Digite algo na tela (com leitura especial): \n");
    scanf("%9[^\n]s", frase); // limita a quantidade de posições do vetor e permite o uso de espaço (sintaxe chata).
    printf("Resultado: %s\n\n", frase);
    fflush(stdin);
*/

// Manipulação de strings com gets e fgets 
/*    
    char frase[10];

    printf("Digite alguma coisa (leitura com gets): ");
    gets(frase); // lê espaços com sintaxe simples, mas permite leitura além do tamanho proposto
    fflush(stdin);

    printf("%s", frase);
    puts(frase); // resultados com puts, apenas para textos


    printf("Digite alguma coisa (leitura com fgets): ");
    fgets(frase, 10, stdin); //lê espaços com sintaxe simples e limita tamanho do vetor.
    fflush(stdin);
    puts(frase);
*/
    return 0;
}