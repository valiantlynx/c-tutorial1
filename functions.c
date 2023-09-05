#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main()
{
    sayHi("mike", 7);
    sayHi("greg", 24);
    sayHi("fred", 18);
    return 0;
}

void sayHi(char name[], int age) {
    printf("Hi %s! You are %i years old\n", name, age);
}

