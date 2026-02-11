#include<stdio.h>

int main(void){
    int i = 21;
    int* j = &i;
    //int** k = &j;

    printf("The value of i is %d\n", i);
    printf("The address of i is %d\n", *j);
    printf("The address of i is %d\n", *(&i));
    printf("The address of i is %d\n", **(&j));  // **(&j) => *j => &i => 21
    return 0;
}

// ***&&&a => a because *& gets cut, so there are 3 pairs of *& which gets cut to remain a