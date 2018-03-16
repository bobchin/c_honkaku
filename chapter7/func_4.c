#include <stdio.h>

// int sum(int *, int *);
int *sum(int *, int *);

// int sum(int *a, int *b)
int *sum(int *a, int *b)
{
    int return_value;
    return_value = *a + *b;
    // return return_value;
    return &return_value;
}

int main(int argc, char *argv[])
{
    // int num_1;
    // int num_2;
    int number_array[2];
    // int answer;
    int *answer;

    // num_1 = 1;
    // num_2 = 2;
    // answer = sum(&num_1, &num_2);
    number_array[0] = 1;
    *(number_array + 1) = 2;
    answer = sum(number_array, &number_array[1]);

    // printf("answer = %d\n", answer);
    printf("answer = %d\n", *answer);

    return 0;
}