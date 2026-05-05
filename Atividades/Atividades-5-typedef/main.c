#include <stdio.h>
#define T 5


typedef struct{
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Horario h;
    Data d;
}Compromisso;

int main(){
    int i;
    printf("\n");
        printf("  ╔════════════════════════════════════╗\n");
        printf("  ║        Agendar Compromissos        ║\n");
        printf("  ╚════════════════════════════════════╝\n");
        printf("\n");
    printf("  >>> Quandos compromissos deseja marcar?");
    scanf("%d", &i);
    Compromisso c[i];

    for (i = 0; i < T; i++){

        printf("Compromisso [%dº]\n", i);
        printf("Digite a hora: \n");
        scanf("%d", &c[i].h.hora);
        printf("Digite os minutos: \n");
        scanf("%d", &c[i].h.minutos);
        printf("Digite os segundos: \n");
        scanf("%d", &c[i].h.segundos);
        printf("Digite o dia: \n");
        scanf("%d", &c[i].d.dia);
        printf("Digite a mes: \n");
        scanf("%d", &c[i].d.dia);
        printf("Digite a ano: \n");
        scanf("%d", &c[2].d.dia);
    }

    return 0;

}