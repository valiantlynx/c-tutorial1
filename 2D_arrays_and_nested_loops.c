#include <stdio.h>

int main()
{

    int nums[3][2] = {
            {4, 7},
            {10, 21},
            {1, 2}
    };


    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%i, ", nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}
