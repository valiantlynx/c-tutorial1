#include <stdio.h>
// it's good to have the function you want to call created before you call it. so that c know about the return type etc. if not you have to do prototyping
double cube(double num) {
    double answer = num*num*num;
    return answer;
}

int main()
{
    printf("The cubed is: %f", cube(2));
    return 0;
}



