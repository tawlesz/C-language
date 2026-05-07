#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define TS 50

typedef struct{
    char name[TS], email[TS], obs[TS];
    struct t{
        int ddd, number;
    }telefone;
    struct e{
        char Rua[TS], numero[TS], complemento[TS], bairro[TS], cep[TS], cidade[TS], estado[TS], pais[TS];
    }endereco;
    struct d{
        int dia, mes, ano;    
    }data;
}agendamento;
int main(void){
    int r=TAM, opt;
    agendamento agenda[TAM];

    do{
        printf("╔════════════════════════════════════════╗\n");
        printf("║            AGENDAR TELEFONES           ║\n");
        printf("╚════════════════════════════════════════╝\n");
        printf(">>> Escolha uma opção abaixo: \n");
        printf("[1] - Novo Agendamento | (%d) restantes\n", r);
        printf("[2] - Buscar Nome\n");
        printf("[2] - Mes de aniversario\n");
        printf("[3] - dia/Mes de aniversario\n");
        printf("[4] - Pagina de Resultdos\n");
        printf("[0] - Encerrar processo\n");
        printf(">>> ");
        scanf("%d", &opt);
        system("cls");

        switch (opt)
        {
        case 1:
            printf("╔════════════════════════════════════════╗\n");
            printf("║            AGENDAR TELEFONES           ║\n");
            printf("╚════════════════════════════════════════╝\n");
            printf(">>> Agendamento\n");
            printf(">>> Digite o nome: ");
            fgets(agenda->name,TAM,stdin);
            printf(">>> Digite o seu email: ");
            fgets(agenda->email,TAM,stdin);
            printf(">>> Digite o seu : ");
            fgets(agenda->email,TAM,stdin);
            break;
        default:
            break;
        }

        r--;
    }while(opt != 0);

    return 0;
}