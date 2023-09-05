#include <stdio.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    float gpa = 6.0;
    float * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age: %p\ngpa: %p\ngrade: %p\n", pAge, pGpa, pGrade);
    //dereference it with * before the pointer name
    printf("dereferenced age: %i\ndereferenced gpa: %f\ndereferenced grade: %c\n", *pAge, *&gpa, *pGrade);
    return 0;
}
