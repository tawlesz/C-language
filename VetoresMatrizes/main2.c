#include <stdio.h>
# define T 4

int main(){
    int m[T][T];

    for(int i = 0; i < T ; i++){
        
        for(int j = 0; j < T; j++){

            do{

                printf("informe o valor para m[%d][%d] (deve estar entre 1 e 20): ",i,j);
                scanf("%d", &m[i][j]);

            }while((m[i][j] < 1 ) || (m[i][j]  > 20));

        }

    }

    printf("\n\nMatriz original:\n\n");

    for(int i = 0; i < T ; i++){
        
        for(int j = 0; j < T; j++){

                printf("[%d]", m[i][j]);

        }
        printf("\n");
    }
    
    printf("\n\nMatriz Transformada:\n\n");

    for(int i = 0; i < T ; i++){
        
        for(int j = 0; j < T; j++){
                if(i < j){

                    m[i][j] = 0;

                }

        }
        printf("\n");
    }

        printf("\n\nMatriz original:\n\n");

    for(int i = 0; i < T ; i++){
        
        for(int j = 0; j < T; j++){

                printf("[%d]", m[i][j]);

        }
        printf("\n");
    }

}