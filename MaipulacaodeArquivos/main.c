#include <stdio.h>

int main(void)
{

  FILE *ftpr; // file é um tipo de dado (ponteiro p do tipo file)

  ftpr = fopen("teste.json","w"); // * the fopen() function is used to open the file, it needs 2 args (the name of file, mode)

  // ? Tip: If you want to create the file in a specific folder, just provide an absolute path (remember to use double backslashes to create a single backslash (\)

  fclose(ftpr);

  return 0;
}

// ? r = read  Abre um arquivo para a leitura. O arquivo deve estar presente no disco.
// ? w = Abre um arquivo para a escrita.
// ? a = abre o arquivo para gravação