#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char full_name[256] = "NIPPON,Taro";
    char first_name[256] = "Hanako";
    char *ptr;

    ptr = strpbrk(full_name, " ,");
    ptr++;

    // strcpy(ptr, first_name);
    strncpy(ptr, first_name, 
        sizeof(full_name) - 1 - strlen(first_name) - 1);
    full_name[sizeof(full_name) - 1] = '\0';
    printf("Full name = %s\n", full_name);
    
    return 0;
}