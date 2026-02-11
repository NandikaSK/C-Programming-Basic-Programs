/*
#include<stdio.h>

int sum(int a);

int sum(int a){
    if (a == 0 || a == 1){
        return 1;
    }
    return a * sum(a - 1);
}

int main(void){
    int a = 5;
    printf("The sum of %d is %d\n", a, sum(a));
    return 0;
}
*/

#include<stdio.h>

int sum(int a);

int sum(int a){
    if (a == 0){
        return 0;
    }
    return a + sum(a - 1);
}

int main(void){
    int a = 5;
    printf("The sum of %d is %d\n", a, sum(a));
    return 0;
}

