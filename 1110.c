#include <stdio.h>
int main(){
    int origin, N, new, i=0;
    scanf("%d", &N);
    origin = N;
    while(1){
        new = (N%10)*10 + (N/10 + N%10)%10;
        N = new;
        i++;
        if(origin==new)
            break;
    }
    printf("%d", i);
    return 0;
}