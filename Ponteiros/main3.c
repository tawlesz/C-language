//%p -> p; *p -> definição e valor do endereço apontado

#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("cls");
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //valor (a)
    printf("%d\n",i + (*p));
    //valor (b)
    printf("%d\n",23 * (*q));
    //valor (c)
    printf("%d\n",*p - *q);
    //valor (d)
    printf("%d\n",*p - (15/(*q))+7);

    return 0;
}

// 6
// 115
// -2
// 7