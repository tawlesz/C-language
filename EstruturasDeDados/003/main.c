#include <stdio.h>
#define T 5

int main(void){

    int opcao;

    do{   
        printf("________________________________\n");
        printf("|     Bem vindo ao Sistema      |\n");
        printf("|_______________________________|\n");
        printf("Escolha uma opcao: \n");
        printf("[1] - Somatorio\n");
        printf("[0] - Sair do Sistema\n");
        printf(">>> ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:

            int n[T];

            for (int i = 0; i <= T-2; i++){
                printf("Digite um valor: \n");
                printf(">>> ");
                scanf("%d", &n[i]);
            }
            
            n[T-1] = 0;
            for(int i = 0; i <= T-2; i++){
                n[T-1] += n[i];
            }

            printf("= %d", n[T-1]);
                break;
            case 2:
                break;
            case 0:
                printf(">>> Encerrando o Sistema..");
                break;
            default:
                break;
        }
    }while(opcao != 0);
    
    return 0;
}