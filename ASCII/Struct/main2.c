#include <stdio.h>
#include <stdlib.h>

#define T 3

struct Data{

    int dia;
    int mes;
    int ano;

} h1[T];

int main(){
    
    int torf, consulta, caso;

    for (int i = 0; i < T; i++){
        printf("Digite a dia [%d]: ", (i+1));
        scanf("%d", &h1[i].dia);
        printf("\n");

        printf("Digite a mês [%d]: ", (i+1));
        scanf("%d", &h1[i].mes);
        printf("\n");

        printf("Digite a ano [%d]: ", (i+1));
        scanf("%d", &h1[i].ano);
        printf("\n");
        
    }

    while(torf != 0){

        system("cls");

        printf("\n");
        printf("  ╔════════════════════════════════════╗\n");
        printf("  ║           Consultar datas          ║\n");
        printf("  ╚════════════════════════════════════╝\n");
        printf("\n");

        printf("  >>> Deseja fazer uma consulta nas datas?(y/n)");
        scanf("%c",caso);

        switch (caso)
        {
        case (caso == "y"):
            /* code */
            break;
        
        default:
            break;
        }

        printf("  >>> Digite uma data a ser consultada:\n");
        printf("  >>>");
        scanf("%d", consulta);

        

    }

}