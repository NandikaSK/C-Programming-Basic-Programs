#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if (a % 97 == 0){
        printf("%d is divisible by 97", a);
    } 
    else {
        printf("%d is not divisible by 97", a);
    }

    return 0;
}
