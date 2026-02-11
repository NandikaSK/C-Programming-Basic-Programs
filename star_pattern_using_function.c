#include<stdio.h>

void star(int a);

void star(int a){
    int i, j;
    for(i = 1; i <= a; i++){
        if(i % 2 == 0){
            continue;
        }
            for(j = 1; j <= i; j++){
                printf("*");
            }
        
        printf("\n");
    }
}


int main(void){
    int a = 5; // Example value for the number of rows
    star(a);
    return 0;
}
