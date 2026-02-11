#include<stdio.h>
int main(void){
    char ch;
    printf("Enter your character:");
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122){
        printf("The character is lowercase");
    }
    else{
        printf("The character is uppercase");
    }
    return 0;
}

