#include <stdio.h>

int main(int argc, char *argv[])
{
    int answer;
    int cnt;

    answer = 0;
    for (cnt = 0; cnt < 10; cnt++) {
        answer = answer + (cnt + 1);
    }
    printf("answer = %d\n", answer);

    return 0;
}