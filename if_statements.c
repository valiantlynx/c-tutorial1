#include <stdio.h>
// it's good to have the function you want to call created before you call it. so that c know about the return type etc. if not you have to do prototyping

int max2(int num1, int num2) {
    int result;

    if(num1 > num2){
        result = num1;
    } else {
        result = num2;
    }
    return result;
}

int max3(int num1, int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}



int main()
{
    // negation operater. negates the whole thisng so true become false. false becomes true
    if(!(3 > 2)){
        printf("True");
    }
    printf("The bigger number of he 2 is: %i\n", max2(20, 5));
    printf("The bigger number of he 3 is: %i\n", max3(20, 52, 19));
    return 0;
}



