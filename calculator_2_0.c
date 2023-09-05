#include <stdio.h>

int main()
{
    /*simple calculator*/
    double num1, num2;
    char op;

   printf("Enter a first number: ");
   scanf("%lf", &num1);

    printf("enter the operator(+, -, *, /): ");
    scanf(" %c", &op); // you need the space before the %c. for it to work

   printf("Enter a second number: ");
    scanf("%lf", &num2);

    if( op == '+'){
        printf("%f", num1 + num2);
    } else if( op == '-'){
        printf("%f", num1 - num2);
    }
    else if( op == '*'){
        printf("%f", num1 * num2);
    }else if( op == '/'){
        printf("%f", num1 / num2);
    } else {
        printf("invalid operator");
    }

    return 0;
}
