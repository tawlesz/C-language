// fase biológica por idade 

#include <stdio.h>

int main(){
    int age;
    char name[20];
    char dl;

    printf("Digite seu nome");
    scanf("%c", name);

    printf("Digite sua idade: \n >>> ");
    scanf("%d", &age);

    printf("Ola %c, voce tem carteira de motorista? \n>>>", name);
    scanf("%c",&dl);

    if (age >= 18) {
        
        if(dl == "s"){
            printf("Pode dirigir!");
        }else{
            printf("Não pode dirigir!");
        }

    }else if((12 <= age) && (age <= 17)){
        printf("Voce e adolescente, ainda não pode dirigir");
    }else{
        printf("Voce e crianca, ainda não pode dirigir");
    }
    
}