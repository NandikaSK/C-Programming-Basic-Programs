/*
#include<stdio.h>

int main(void){
    int n = 10, sum = 0, i;
    printf("Enter the numder:");
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++){
        sum += i;
    }
    printf("The sum = %d", sum);
    return 0;
}
*/

#include<stdio.h>

int main(void){
    int n = 10, sum = 0, i = 1;
    printf("Enter the numder:");
    scanf("%d", &n);
    
    while (i <= n){
        sum += i;
        i++;
    }
    printf("The sum = %d", sum);
    return 0;
}