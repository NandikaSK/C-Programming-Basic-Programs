#include<stdio.h>
#include<stdlib.h>
int main(void) {
    float a,b,c;
    float avg;
    printf("Enter three numbers:");
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("The average is:%f",avg);
    return 0;
}