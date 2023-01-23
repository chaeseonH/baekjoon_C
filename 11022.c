#include <stdio.h>
int main(){
    int T, A, B, C, i;
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%d %d", &A, &B);
        C = A+B;
        printf("Case #%d: %d + %d = %d\n", i+1, A, B, C);
    }
    return 0;
}