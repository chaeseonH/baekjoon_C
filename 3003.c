#include <stdio.h>
int main(){
    int white[6];
    int i;
    for(i=0; i<6; i++)
    {
        scanf("%d", &white[i]);
    }
    printf("%d %d %d %d %d %d", 1-white[0], 1-white[1], 2-white[2], 2-white[3], 2-white[4], 8-white[5]);
    return 0;
}