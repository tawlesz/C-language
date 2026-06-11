#include <stdio.h>
#include <stdlib.h>

// ? TO ADD A NEW CONTENT IN THE FILE WE CAN USE THE a MODE "APPEND", LETS SEE IT

int main(void) {
  system("cls");
  
  FILE *ftpr;

  ftpr = fopen("teste.json","a");
  fprintf(ftpr, ",\n{ \"agora em pt-br\": \"meu deus\"}\n");
  fclose(ftpr);
  return 0;
}