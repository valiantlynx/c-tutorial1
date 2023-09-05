#include <stdio.h>

int main()
{
    //pointers is just a datatype. of memory addresses
    int age = 30;
    int * pAge = &age;
    float gpa = 6.0;
    float * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age: %p\ngpa: %p\ngrade: %p ", pAge, pGpa, pGrade);
    return 0;
}
