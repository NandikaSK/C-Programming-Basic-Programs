#include<stdio.h>

void convert(float x);

int main(void){
    float f;
    printf("Enter the temperature in farenheit:");
    scanf("%f",&f);
    convert(f);
    return 0;
}

void convert(float x){
    float c=(x-32)*5/9;
    printf("Celcius: %f", c);
}