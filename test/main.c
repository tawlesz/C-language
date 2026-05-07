#include <stdio.h>
 
int main() {
    //tea type
    int T; 
    int res = 0;
    //1 - 4 (1) white tea; (2) green tea; 
    //(3) black tea; or (4) herbal tea
    int A, B, C, D, E;//1-4
    scanf("%d", &T);
    scanf("%d", &A);
    if(res == A){
        res=+1;
    }
    scanf("%d", &B);
    if(res == B){
        res=+1;
    }
    scanf("%d", &C);
    if(res == C){
        res=+1;
    }
    scanf("%d", &D);
    if(res == D){
        res=+1;
    }
    scanf("%d", &E);
    if(res == E){
        res=+1;
    }
    printf("%d\n", T);
    return 0;
}