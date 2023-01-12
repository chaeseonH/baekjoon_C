#include <stdio.h>
int main(){
    int year, result;
    scanf("%d", &year);
    result = year - (2541-1998);
    printf("%d", result);
    return 0;
}