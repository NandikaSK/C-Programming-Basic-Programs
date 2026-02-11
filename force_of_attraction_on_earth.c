#include<stdio.h>

void force(float x);

int main(void){
    float m;
    printf("Enter the mass of the body:");
    scanf("%f", &m);
    force(m);
    return 0;
}

void force(float x){
    float f = x * 9.8;
    printf("The force of attraction excerted = %f", f);
}