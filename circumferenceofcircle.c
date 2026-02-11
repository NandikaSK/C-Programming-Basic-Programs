#include<stdio.h>
#define pi 3.1425
int main(void){
    int r;
    float c;
    printf("Enter the radius of the square:");
    scanf("%d",&r);

    c=2*pi*r;

    printf("Circumference=%f",c);
    return 0;
}