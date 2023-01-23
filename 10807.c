#include <stdio.h>
int main(){
    int N, i, v, count=0;
    int num[100];
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &num[i]);
    }

    scanf("\n%d", &v);

    for(i=0; i<N; i++){
        if(num[i]==v)
            count++;
    }
    printf("%d", count);
    return 0;
}