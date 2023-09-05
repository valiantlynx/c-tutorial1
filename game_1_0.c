#include <stdio.h>

int main()
{
    /*simple mad libs game*/
    char colour[20], plural_noun[20], noun[20];

    printf("Enter a colour: ");
    scanf("%s", colour);

    printf("Enter a plural noun: ");
    scanf("%s", plural_noun);

    printf("Enter a noun: ");
    fgets(noun, 20, stdin); // why does this not work? it just cuts the code and ends the process

    printf("Roses are %s\n", colour);
    printf("%s are blue\n", plural_noun);
    printf("I love %s\n", noun);

    return 0;
}
