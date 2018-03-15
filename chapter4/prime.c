#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, j, end;
    int flag_not_prime;

    // end = 100;
    end = 5;
    i = 1;

    while (i <= end) {
        printf("\nTest for %d\n", i);
        
        flag_not_prime = 0;
        j = 2;
        while (j < i) {
            printf("    Can %d divide by %d?\n", i, j);
            if (i % j == 0) {
                printf("        Yes, not prime\n");
                flag_not_prime = 1;
                break;
            }
            printf("        No, continue\n");
            j = j+ 1;
        }
        if (flag_not_prime == 0) {
            printf("    %d is prime\n", i);
        }
        i = i + 1;
    }

    return 0;
}




