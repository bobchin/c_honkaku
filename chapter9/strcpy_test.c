#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char string_1[16] = "hello, world";
    // char string_2[16] = "";
    char string_2[2] = "";

    printf("string_2 is = %s\n", string_2);

    strcpy(string_2, string_1);
    // strcpy(string_2, NULL);

    printf("string_2 is = %s\n", string_2);
    return 0;
}