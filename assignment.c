#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int P;
    float R,n;
    float SI;
    printf("enter the principal amount:");
    scanf("%d",&P);
    printf("enter the intrest rate:");
    scanf("%f",&R);
    printf("enter the number of years:");
    scanf("%f",&n);
    SI=(P*R*n)/100;
    printf("the simple intrest:%f",SI);
    return 0;
}