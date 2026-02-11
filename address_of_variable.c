#include<stdio.h>

/*int main(void){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %d\n", *ptr);
    return 0;
}*/

void ten(int*);

void ten(int *a){
    *a *= 10;
}

int main(void){
    int x = 45;
    printf("The value of x is %d\n", x);
    ten(&x);
    printf("The value of x is %d\n", x);
    return 0;
}



