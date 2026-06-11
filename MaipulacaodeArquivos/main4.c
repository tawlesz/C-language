#include <stdio.h>
#include <stdlib.h>

int main(void) {
  system("cls");
  
  FILE *ftpr;
  char myString[100]; 

  ftpr = fopen("teste.json","r");
  fgets(myString, 100, ftpr);

  puts(myString);
  fclose(ftpr);

  return 0;
}