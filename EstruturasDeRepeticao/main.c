#include <stdio.h>

int main(){
    
    // O for é geralmente usado evidenciando uma variável de controle para o laço. 
    
    // Esse comando tem predefinições de condições, ou seja, o numero de vezes a ser executado fica conhecido ao iniciar a estrutura.

    /*• inic  determina o valor inicial
    da variável de controle.
    • cond  determina quando a
    repetição será finalizada.
    • acao  determina quando a
    variável de controle irá agir na
    ação da repetição através de
    incremento ou decremento. Isso
    evita que a repetição se torne
    infinita.*/

    //A leitura fica: int i iniciando com valor 0; enquanto i for menor que 10, i incrementa +1

    /*for (int i=0; i<10; i++) {
        printf("%d", i);
    }*/
    

    // O while é uma extrutura que executa o laço enquanto uma condição for verdadeira (pode ser que não execute uma vez sequer!)
    
    /*int i = 10;

    while (i > 0){
        printf("%d \n", i);
        i--;
    }*/

    // Temos ainda o do wwhile que faz a verificação no final do laço (ou seja, obrigatoriamente é necessária pelo menos uma excução)

    /* int i = 10;
    do {
        printf("teste");
    }while (i > 20); */

    return 0;
}