#include <stdio.h>

int main()
{
    int secretNumber = 5;
    int guess = 0;
    int guessCount = 0;
    int guessLimit = 3;
    int ourOfGuesses = 0;

    while ( guess != secretNumber && ourOfGuesses == 0 ){
        if (guessCount < guessLimit) {
            printf("Enter secret number: \n");
            scanf("%i", &guess);
            guessCount++;
        } else {
            ourOfGuesses = 1;
        }
    }

    if (ourOfGuesses == 0) {
        printf("You win!\n");
    } else {
        printf("Out of gueses!\n");
    }

    return 0;
}
