#include<stdio.h>

int main(void){
    int n = 8, mul, i, sum = 0;

    for (i = 1; i <= n; i++){
        mul = i * n;
        sum += mul;
    }
    printf("The sum= %d", sum);
    return 0;
}