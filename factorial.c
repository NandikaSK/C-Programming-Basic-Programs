#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int n,i,factorial;
    printf("Enter the number:");
    scanf("%d",&n);
    for ( i = 1; i < n; i++) {
        factorial=n*i;
    }
    printf("Factorial=%d",factorial);
    return 0;
}
    