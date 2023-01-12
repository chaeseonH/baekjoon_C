#include <stdio.h>
int main(){
    int a, b, num3, num4, num5, num6;
    scanf("%d\n%d", &a, &b);
    num5 = a*(b/100);
    b = b%100;
    num4 = a*(b/10);
    b = b%10;
    num3 = a*b;
    num6 = num3 + num4*10 + num5*100;
    printf("%d\n%d\n%d\n%d", num3, num4, num5, num6);
    return 0;
}