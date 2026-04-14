#include <stdio.h>

int main(void){
    int m1[5][5], m2[5][5], m3[5][5];
    
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++){

            // const int T = x 
            printf("Forneca um valor para m1[%d][%d]\n", i, j);
            scanf("%d", &m1[i][j]);

        }

    }
        for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < 5; j++){

            // const int T = x 
            printf("Forneca um valor para m1[%d][%d]\n", i, j);
            scanf("%d", &m2[i][j]);

        }

    }
    return 0;
}
