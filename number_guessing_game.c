#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void){
    int no_of_guesses = 0, guessed;

    srand(time(0));   // Seed the random number generator
    int randomNumber = (rand() % 100) + 1;   // 0 to 100
    // printf("Random number: %d\n", randomNumber);
    
    do{
        printf("Guess the number:");
        scanf("%d", &guessed);
        if (guessed > randomNumber){
            printf("Lower Number Please!\n");
        }
        else if(guessed < randomNumber){
            printf("Higher Number Please!\n");
        }
        else{
            printf("Congrats!");
        }
        no_of_guesses++;
    }while( guessed != randomNumber);

    printf("You guessed the number in %d guesses!", no_of_guesses);

    return 0;
}