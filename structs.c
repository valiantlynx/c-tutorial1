#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    printf("Student1 gpa: %f\n", student1.gpa);
    printf("Student1 name: %s\n", student1.name);

    struct Student student2;
    student2.age = 23;
    student2.gpa = 8.2;
    strcpy(student2.name, "Gore");
    strcpy(student2.major, "mech");

    printf("student2 gpa: %f\n", student2.gpa);
    printf("student2 name: %s\n", student2.name);
    return 0;
}



