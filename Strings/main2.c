// funções/bibliotecas de apoio para o tratamento de strings

#include <stdio.h>
#include <string.h>
#include <locale.h>
#define T 20

int main(){
    setlocale(LC_ALL,"Portuguese"); // libera uso de caracteres específicos da lingua portuguesa
    
    // atribuição e alteração de valores em strings (com strcpy)
    
    /*char origem[T] = {"Olá mundo!!"};
    char destino[T];

    puts("\nresultado antes do cpy \n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    puts("\nresultado apos o cpy \n");
    puts(origem);
    puts(destino); */

    // concatenação (com strcat)

    char texto1[20] = {"era uma casa "};
    char texto2[20] = {"muito engraçada"};

    puts("antes da concatenação:\n");
    puts(texto1);
    puts(texto2);

    strcat(texto1,texto2);
    puts("Depois da concatenação: ");
    puts(texto1); // apos a concatenação, o novo valor concatenado é guardado na primeira variável!!!, a segunda segue igualmente.
    puts(texto2); 
    return 0;
}