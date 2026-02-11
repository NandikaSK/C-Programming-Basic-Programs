#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int n=5,i,j;
    for ( i = 1; i <=n; i++) {
        for ( j = n; j > i; j--) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}

    