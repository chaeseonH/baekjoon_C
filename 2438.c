#include <stdio.h>
int main(){
    int i,N,k,p;
    scanf("%d", &N);
    for(i=1; i<N+1; i++){
        for(p=0; p<N-i; p++)
            printf(" ");
        for(k=0; k<i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}