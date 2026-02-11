#include <stdio.h>

int main(void){
    int a, b, c, d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);

    if(a >= b && a >= c && a >= d){
        printf("%d is the greatest\n", a);
    }
    else if(b >= a && b >= c && b >= d){
        printf("%d is the greatest\n", b);
    }
    else if(c >= a && c >= b && c >= d){
        printf("%d is the greatest\n", c);
    }
    else {
        printf("%d is the greatest\n", d);
    }

    return 0;
}