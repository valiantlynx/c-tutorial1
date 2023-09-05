#include <stdio.h>

int main()
{
    int index = 1;
    // check the condition then do something
    while (index <= 5){
        printf("while!! %i ", index);
        index++;
    }

    int index2 = 1;
    // do the thing before checking the condition
    do {
        printf("do while!! %i ", index2);
        index2++;
    } while (index2 <= 5);

    return 0;
}
