#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b );
    c=a+b;
    printf("The result=%d",c);
    return 0;
}