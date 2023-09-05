#include <stdio.h>

int main()
{
    /*arrays*/
    /* if i know whats in the array */
    int luckynumbers[] = {4, 8, 12, 5};
    luckynumbers[1] = 200;

    printf("%d\n", luckynumbers[1]);

    /* if i dont know whats in the array */
    int luckynumbersUnkwown[6];
    luckynumbersUnkwown[1] = 300;

    printf("%d", luckynumbersUnkwown[0]);

    return 0;
}
