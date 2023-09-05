#include <stdio.h>

int main()
{
    /*simple calculator*/
    double num1, num2;

   printf("Enter a first number: ");
   scanf("%lf", &num1);

   printf("Enter a second number: ");
    scanf("%lf", &num2);

    printf("The sum of %f and %f is %f\n", num1, num2, num1 + num2);

    return 0;
}
