#include <stdio.h>

int main(int argc, char *argv[])
{
    char a;
    int b;
    double c;

    printf("size of literal '1' is %zu bytes\n", sizeof 1);
    printf("size of literal 'hello, world\\n' is %zu bytes\n", sizeof "hello, world\n");
    
    printf("size of variable a is %zu bytes\n", sizeof a);
    printf("size of variable b is %zu bytes\n", sizeof b);
    printf("size of variable c is %zu bytes\n", sizeof c);

    printf("size of type long long is %zu bytes\n", sizeof(long long));

    return 0;    
}