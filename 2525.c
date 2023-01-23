#include <stdio.h>
int main(){
    int A, B, C;
    scanf("%d %d\n", &A, &B);
    scanf("%d\n", &C);
    A = A+(B+C)/60;
    B = (B+C)%60;
    if(A>=24){
        A = A - 24;
    }
    printf("%d %d",A, B);
    return 0;
}