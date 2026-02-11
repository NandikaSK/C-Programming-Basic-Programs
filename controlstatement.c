#include<stdio.h>
#include<stdlib.h>
int main(void) {
    int a;
    printf("Choose the menu:\n1 for biriyani\n2 for fried rice\n3 for porotta\n4for mandi\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("You have selected biriyani");
        break;
        case 2:
        printf("You have selected fired rice");
        break;
        case 3:
        printf("You have selected porotta");
        break;
        case 4:
        printf("You have selected mandi");
        break;
        case 5:
        printf("Get help");
        break;
    }
    return 0;
}