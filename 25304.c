#include <stdio.h>
int main(){
    int X, N, a, b, i, sum=0;
    scanf("%d", &X);
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d %d", &a, &b);
        sum = sum + a*b;
    }
    if(sum==X)
        printf("Yes");
    else
        printf("No");
    return 0;
}