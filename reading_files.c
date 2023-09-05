#include <stdio.h>

int main()
{
    char line[255];
    // file mode that go into the fopen are many. r-read,w-write-or-create, a-append
    FILE  * fPointer = fopen("employees.txt", "r");
    fprintf(fPointer, "Kelly, salesman\nOman, receptionist\nLinn, Accounting\n");

    //gets the first line then increments the line to get. so is i fgets again it will get the second item. 
    fgets(line, 255, fPointer);
    //gets the second line
    fgets(line, 255, fPointer);
    //gets the third line
    fgets(line, 255, fPointer);

    //get the wholefile no matter how many lines
    while(!feof(fPointer)){ //The C library function int feof(FILE *stream) tests the end-of-file indicator for the given stream.
        fgets(line, 255, fPointer);
        printf("%s", line);
    }
    
    //always close
    fclose(fPointer);
    return 0;
}
