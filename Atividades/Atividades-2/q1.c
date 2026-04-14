#include <stdio.h>
#include <stdlib.h>
// #include <conio.h>

int main(void) {

    int opcao;
    float c, f, k; 
    do{
        system("cls");
        printf("______________________________________________\n");
        printf("|          CONVERCAO DE TEMPERATURAS          |\n");
        printf("|_____________________________________________|\n");
        printf("| [1] - Converter de Celsius para Farenheint  |\n");
        printf("| [2] - Converter de Farenheint para Celsuis  |\n");
        printf("| [3] - Converter de Kelvin para Celsius      |\n");
        printf("| [4] - Converter de Celsius para Kelvin      |\n");
        printf("| [5] - Converter de Farenheint para Kelvin   |\n");
        printf("| [6] - Converter de Kelvin para Farenheint   |\n");
        printf("| [0] - Sair do Sistema                       |\n");
        printf("|_____________________________________________|\n");
        printf(">>> ");
        
        scanf("%d", &opcao);
        system("cls");
        
        switch (opcao){
            case 1:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("\n Digite a temperatura em graus C: ");
                printf(">>> ");
                scanf("%f", &c);
                f = ((c * ((float)9/5))+32);
                printf("%.2f graus Farenheint \n", f);
                break;
            case 2:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("Digite a temperatura em graus F: ");
                printf(">>> ");
                scanf("%f", &f);
                c = ((5 * (f - 32.0)/9.0));
                printf("%.2f graus Celsius \n", c);
                break;
            case 3:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("Digite a temperatura em graus K: ");
                printf(">>> ");
                scanf("%f", &k);
                c = (k - 273.15);
                printf("%.2f graus Celsius \n", c);
                break;
            case 4:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("Digite a temperatura em graus C: ");
                printf(">>> ");
                scanf("%f", &c);
                k = (c + 273.15);
                printf("%.2f graus Kelvin \n", k);
                break;
            case 5:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("Digite a temperatura em graus F: ");
                printf(">>> ");
                scanf("%f", &f);
                c = ((5 * (f - 32.0)/9.0));
                k = (c + 273.15);
                printf("%.2f graus Kelvin \n", k);
                break;
            case 6:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf("Digite a temperatura em graus K: ");
                printf(">>> ");
                scanf("%f", &k);
                c = (k - 273.15);
                f = ((c * ((float)9/5))+32);
                printf("%.2f graus Farenheint \n", f);
                break;
            case 0:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf(">>> Encerrando programa... \n");
                break;
            default:
                printf("______________________________________________\n");
                printf("|          CONVERCAO DE TEMPERATURAS          |\n");
                printf("|_____________________________________________|\n");
                printf(">>> Insira um valor valido \n");
                break;
        }system("pause");
    }while(opcao != 0);
    return 0;
}