# include <stdio.h>

int main(void){

    int soma = 0;
    int A[6] = {1, 0, 5, -2, -5, 7};
    soma = (A[0] + A[1] + A[5]);
    printf("A soma entre %d, %d, e %d é igual a: %d\n\n", A[0], A[1], A[5], soma);
    A[4] = 100;
    printf("<VALORES DO VETOR>\n");
    for(int i = 0; i < 6; i++){
        printf("%d\n", A[i]);
    }

    return 0;
}