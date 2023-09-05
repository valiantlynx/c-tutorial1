#include <stdio.h>

int main()
{
    double grade;

    /*prompt the user to enter a number*/
    printf("Enter a your grade points: ");

    /*read the number from the user, when using scanf() function, we use & before the variable name. it is called address operator. and lf is used for double data type*/
    scanf("%lf", &grade);

    /*different from scanf(), printf() uses %f for double data type. */
    printf("Your grade is %f\n", grade);



    int age;

    /*prompt the user to enter a number*/
    printf("Enter a your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);






    char character;

    /*prompt the user to enter a character*/
    printf("Enter a your a character: ");
    scanf("%c", &character);
    printf("Your a character is %c\n", character);




 char name[20];

    /*prompt the user to enter a name*/
    printf("Enter a your a name: ");
    fgets(name, 20, stdin);
    printf("Your a name is %s\n", name);



    /*we this is to pause the program, so that we can see the output*/
    scanf("%lf", &grade);
    
    return 0;
}
