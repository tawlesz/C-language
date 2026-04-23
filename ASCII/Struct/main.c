#include <stdio.h>
#include <math.h>

struct DadosAluno{
    
    float nota1, nota2;
    int idade;

};

int main(){

    float media;
    struct DadosAluno infoAluno;
    printf("Digite a nota1 do aluno: ");
    scanf("%f", &infoAluno.nota1);
    printf("Digite a nota2 do aluno: ");
    scanf("%f", &infoAluno.nota2);
    media = (infoAluno.nota1 + infoAluno.nota2)/2;
    printf("Digite a idade do aluno: ");
    scanf("%d", &infoAluno.idade);
    printf(" ");
    printf(" A nota do aluno idade %d é: %.1f", infoAluno.idade, media);
}