#include <stdio.h>

int main()
{
    //alternative
    int i;
    while (i <= 5 ){
        printf("%i: \n", i);
        i++;
    }

    //for loop below condenses all the code above into one fuc
    for (int i = 0; i <= 5; ++i) {
        printf("%i: \n", i);
    }

    int array1[] = {4,7,9,10,21, 45};
    for (int i = 0; i <= 5; ++i) {
        printf("%i: \n", array1[i]);
    }
    return 0;
}
