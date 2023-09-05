#include <stdio.h>

int main()
{
    // file mode that go into the fopen are many. r-read,w-write-or-create, a-append
    FILE  * fPointer = fopen("employees.txt", "a");
    fprintf(fPointer, "Kelly, salesman\nOman, receptionist\nLinn, Accounting\n");
    //always close
    fclose(fPointer);
    return 0;
}
