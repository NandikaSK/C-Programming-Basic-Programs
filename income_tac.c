#include<stdio.h>
int main(void){
    float income, tax;
    printf("Enter your income:");
    scanf("%f", &income);
    tax = 0;

    if (income < 250000){
        printf("No Income Tax!");
    }
    else if (income >= 250000 && income < 500000){
        tax = (income - 250000) * 0.05;
        printf("Income Tax: %.2f\n", tax);
    }
    else if (income >= 500000 && income < 1000000){
        tax = (250000 * 0.05)  + (income - 500000) * 0.20;
        printf("Income Tax: %.2f\n", tax);
    }
    else if (income >= 1000000){
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
        printf("Income Tax: %.2f\n", tax);
    }
    return 0;
}