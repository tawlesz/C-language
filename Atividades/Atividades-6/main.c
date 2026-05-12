/*
Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se
ter os seguintes dados:

    Nome
    E-mail
    Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade, estado, país).
    Telefone (contendo campo para DDD e número)
    Data de aniversário (contendo campo para dia, mês, ano).
    Observações: Uma linha (string) para alguma observação especial.

(a) Definir a estrutura acima.
(b) Declarar a variável agenda (vetor) com capacidade de agendar até 10 nomes.
(c) Definir um bloco de instruções busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
(d) Definir um bloco de instruções busca por mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse mês.
(e) Definir um bloco de instruções busca por dia e mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversário nesse dia e mês.
(h) Definir um bloco de instruções imprime agenda com as opções:

    Imprime nome, telefone e e-mail.
    Imprime todos os dados.

(i) O programa deve ter um menu principal oferecendo as opções acima.
4
*/
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
int main(){
    int opt, quant;
    agendamento agenda[TAM];

    do{
        system("cls");
        printf("╔════════════════════════════════════════╗\n");
        printf("║            AGENDAR TELEFONES           ║\n");
        printf("╚════════════════════════════════════════╝\n");
        printf(">>> Escolha uma opção abaixo: \n");
        printf("[1] - Novo Agendamento\n");
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
                printf(">>> Informações <<<\n");
                printf(">>> Digite a quantidade de agendamentos: \n");
                scanf("%d", &quant);
                for(int i = 0; i<quant; i++){
                    fflush(stdin);
                    printf(">>> Digite o nome: ");
                    fgets(agenda[i].name,TAM,stdin);
                    printf(">>> Digite o seu email: ");
                    fgets(agenda[i].email,TAM,stdin);
                    system("cls");
                        printf("╔════════════════════════════════════════╗\n");
                        printf("║            AGENDAR TELEFONES           ║\n");
                        printf("╚════════════════════════════════════════╝\n");
                        printf(">>> Endereco <<<\n");
                        fflush(stdin);
                        printf(">>> Digite sua Rua: ");
                        fgets(agenda[i].endereco.Rua,TAM,stdin);
                        printf(">>> Digite o numero: ");
                        fgets(agenda[i].endereco.numero,TAM,stdin);
                        printf(">>> Digite o complemento: ");
                        fgets(agenda[i].endereco.complemento,TAM,stdin);
                        printf(">>> Digite seu bairro: ");
                        fgets(agenda[i].endereco.bairro,TAM,stdin);
                        printf(">>> Digite seu CEP: ");
                        fgets(agenda[i].endereco.cep,TAM,stdin);
                        printf(">>> Digite sua cidade: ");
                        fgets(agenda[i].endereco.cidade,TAM,stdin);
                        printf(">>> Digite seu estado: ");
                        fgets(agenda[i].endereco.estado,TAM,stdin);
                        printf(">>> Digite seu pais: ");
                        fgets(agenda[i].endereco.pais,TAM,stdin);
                            system("cls");
                            printf("╔════════════════════════════════════════╗\n");
                            printf("║            AGENDAR TELEFONES           ║\n");
                            printf("╚════════════════════════════════════════╝\n");
                            printf(">>> Telefone para contato <<<\n");
                            printf(">>> Digite seu ddd (XY): ");
                            fflush(stdin);
                            scanf("%d", &agenda[i].telefone.ddd);
                            printf(">>> Digite seu número de telefone: ");
                            fflush(stdin);
                            scanf("%d", &agenda[i].telefone.number);
                                system("cls");
                                printf("╔════════════════════════════════════════╗\n");
                                printf("║            AGENDAR TELEFONES           ║\n");
                                printf("╚════════════════════════════════════════╝\n");
                                printf(">>> Data de aniversario <<<\n");
                                printf(">>> Dia: ");
                                fflush(stdin);
                                scanf("%d", &agenda[i].data.dia);
                                printf(">>> Mes: ");
                                fflush(stdin);
                                scanf("%d", &agenda[i].data.mes);
                                printf(">>> Ano: ");
                                fflush(stdin);
                                scanf("%d", &agenda[i].data.ano);
                                    system("cls");
                                    printf("╔════════════════════════════════════════╗\n");
                                    printf("║            AGENDAR TELEFONES           ║\n");
                                    printf("╚════════════════════════════════════════╝\n");
                                    printf(">>> Observação <<<\n");
                                    printf(">>> Digite aqui: ");
                                    fflush(stdin);
                                    gets(agenda[i].obs);
                                    system("cls");
                                    printf("╔════════════════════════════════════════╗\n");
                                    printf("║            AGENDAR TELEFONES           ║\n");
                                    printf("╚════════════════════════════════════════╝\n");
                }
                break;
            case 2:
                
                break;
            default:
                break;
        }
    }while(opt != 0);

    return 0;
}