#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j;

    // int tuple[4][5] = {{0}};
    // tuple[2][3] = 1;

    // int tuple[4][5] = {
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 0, 0},
    //     {0, 0, 0, 1, 0},
    //     {0, 0, 0, 0, 0}
    // };

    int tuple[][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 0}
    };

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", tuple[i][j]);
        }
        printf("\n");
    }
    return 0;
}