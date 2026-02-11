#include<stdio.h>

int main(void){
    int n = 10, mul, i;

    for (i = 10; i >= 1; i--){
        mul = i * n;
        printf("%d x %d = %d\n", i, n, mul);
    }
    return 0;
}