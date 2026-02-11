#include<stdio.h>
int main(void){
    float math, eng, sci, total_percentage;
    printf("Enter your maths mark:");
    scanf("%f", &math);
    printf("Enter your english mark:");
    scanf("%f", &eng);
    printf("Enter your science mark:");
    scanf("%f", &sci);

    total_percentage = ((math + eng + sci) / 300) * 100;
    if (total_percentage >= 40 && math >= 33 && eng >= 33 && sci >= 33){
        printf("You have passed you semester!");
    }
    else{
        printf("You have failed your semester!");
    }
    return 0;
}