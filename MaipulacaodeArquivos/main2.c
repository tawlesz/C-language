#include <stdio.h>
#include <stdlib.h>

// ! IT WRITE A CONTENT, BUT IT OVERWRITE EVERY OLD CONTENT

int main(void) {
  system("cls");
  
  // ? DEFINE THE FILE POINTER
  FILE *ftpr;

  // ? OPEN THE FILE IN WRITE MODE
  ftpr = fopen("teste.json", "w");

  // ? WRITE SOME CONTENT IN THE FILE
  fprintf(ftpr, "{\"new json module \": }");

  // ? CLOSE THE FILE
  fclose(ftpr);

  return 0;
}