#include <stdio.h>


int main()
{
    // switch statement. used to compare one value to abunch of different statements.
    char grade = 'F';

    switch (grade) {
        case 'A':
            printf("You did great");
            break;
        case 'B':
            printf("You did alright");
            break;
        case 'C':
            printf("You did poorly");
            break;
        case 'D':
            printf("You did very bad");
            break;
        case 'F':
            printf("You failed");
            break;
        default:
            printf("Invalid grade");
    }
    return 0;
}



