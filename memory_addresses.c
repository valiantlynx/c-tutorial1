#include <stdio.h>

int main()
{
    int age = 30;
    float gpa = 6.0;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p ",&age, &gpa, &grade);
    return 0;
}
