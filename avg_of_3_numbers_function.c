#include<stdio.h>

void average(int x, int y, int z);

int main(void){
    int a, b, c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);
    average(a, b, c);
    return 0;
}

void average(int x, int y, int z){
    int d = (x + y + z)/3;
    printf("Average = %d", d);
}