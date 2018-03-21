#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    printf("foo bar = %d\n", strcmp("foo", "bar"));
    printf("bar bar = %d\n", strcmp("bar", "foo"));
    printf("foo foo = %d\n", strcmp("foo", "foo"));

    char a[] = "foo";
    char b[] = "bar";
    printf("foo bar = %d\n", strcmp(a, b));
    printf("bar bar = %d\n", strcmp(b, a));
    printf("foo foo = %d\n", strcmp(a, a));

    return 0;    
}