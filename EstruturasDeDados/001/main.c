#include <stdio.h>

/**
 * Reads a grade from standard input and validates it.
 * Ensures the value is between 0 and 10 and handles non-numeric input.
 */
float ler_nota(int num) {
    float nota;
    int resultado;

    while (1) {
        printf("Digite a nota %d (0 a 10): ", num);
        resultado = scanf("%f", &nota);

        // Check if a number was read and if it's in the valid range
        if (resultado == 1 && nota >= 0 && nota <= 10) {
            return nota;
        }

        // Clear the input buffer to prevent infinite loops on non-numeric input
        while (getchar() != '\n'); 

        printf("ERRO: Valor invalido. Digite uma nota entre 0 e 10.\n");
        printf("----------------------------------------------------\n");
    }
}

int main() {
    float nota1, nota2, media;

    // Use a function to avoid code duplication and fix the logic error
    nota1 = ler_nota(1);
    nota2 = ler_nota(2);

    media = (nota1 + nota2) / 2.0f;

    printf("\nMedia final: %.2f\n", media);

    return 0;
}
