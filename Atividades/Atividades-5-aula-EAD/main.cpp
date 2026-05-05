
/*Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. Permita ao usuário entrar com os dados de 5 alunos. Calcule a média aritmética das 3 notas de cada, sabendo que o intervalo de valores aceitos das notas é entre 0 e 10. Depois do fornecido e calculado, faça:

    Encontre e mostre o aluno com maior nota da primeira prova.
    Encontre e mostre o aluno com maior média geral.
    Encontre e mostre o aluno com menor média geral.
    Mostre a lista dos alunos com o nome, a média e o status, onde este deve apresentar se ele foi aprovado ou reprovado, considerando o valor 7 para aprovação.

Anexe nesta atividade o arquivo com extensão ".cpp", contendo o código fonte.*/

#include <stdio.h>
#include <stdlib.h>
#define T 5

struct AlunosCurso{

    char matricula[13];
    char nome[101];
    float nota[3];

};

int main(){
    struct AlunosCurso Aluno[T];
    float media[T], soma = 0;
    float maior, menor;
    system("cls");

    for(int i = 0; i<T; i++){
        
        printf("\n");
        printf("  ╔════════════════════════════════════╗\n");
        printf("  ║    SISTEMA PARA DADOS DE ALUNOS    ║\n");
        printf("  ╚════════════════════════════════════╝\n");
        printf("\n");

        printf("  [ITEM 1] - Digite a matrícula do %dº aluno: ", i+1);
        scanf("%12[^\n]s",Aluno[i].matricula);
        fflush(stdin);

        printf("  [ITEM 2] - Digite o nome do %dº aluno: ", i+1);
        scanf("%100[^\n]s",Aluno[i].nome);
        fflush(stdin);

        for(int j = 0; j<T-2; j++){

            do{
                
                printf("  [ITEM %d] - Digite a %dº nota (entre 0 e 10), do %dº aluno: ", j+3, j+1, i+1);
                scanf("%f", &Aluno[i].nota[j]);
                fflush(stdin);

            }while((Aluno[i].nota[j] < 0) || (Aluno[i].nota[j] > 10));
            soma += (Aluno[i].nota[j]); 
            if(j == 2){
                media[i] = (soma)/3;
            }

        }
        soma = 0;
        system("cls");
    }
    
    system("cls");
    maior = 0;
    menor = 10;

    for (int i = 0; i<T; i++){
        if((Aluno[i].nota[1]) >= maior){
            maior = Aluno[i].nota[1];
        }else if((Aluno[i].nota[1]) <= menor){
            menor = Aluno[i].nota[1];
        }
    }

    printf(">>> A maior 1ª nota foi: %.1f | A menor 1ª nota foi: %.1f\n", maior, menor);

    maior = 0;
    menor = 10;

    for (int i = 0; i<T; i++){
        if((media[i]) >= maior){
            maior = media[i];
        }else if(media[i] <= menor){
            menor = media[i];
        }
    }

    printf(">>> A maior média foi: %.1f | A menor média foi: %.1f\n\n", maior, menor);

    printf("Tecle [ENTER] seguir para a lista de alunos\n")   ;

    system("pause");
    system("cls");


    for (int i = 0; i<T; i++){
        
        printf("ALUNO  |  %s\n", Aluno[i].nome);
        printf("MEDIA  |  %.1f\n", media[i]);
        if((media[i]) >= 7.00){
            printf("STATUS |  APROVADO!\n\n\n");
        }else{
            printf("STATUS |  REPROVADO!\n\n\n");
        }
        
    }

    system("pause");
    system("cls");

    return 0;
}