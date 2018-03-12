#include <stdio.h>

int main(int argc, char *argv[])
{
    char one_string[14];

    one_string[0]  = 104;   // h
    one_string[1]  = 101;   // e
    one_string[2]  = 108;   // l
    one_string[3]  = 108;   // l
    one_string[4]  = 111;   // o
    one_string[5]  = 44;    // ,
    one_string[6]  = 32;    // 
    one_string[7]  = 119;   // w
    one_string[8]  = 111;   // o
    one_string[9]  = 114;   // r
    one_string[10] = 108;   // l
    one_string[11] = 100;   // d
    one_string[12] = 10;    // \n
    one_string[13] = 0;     // \0 
    
    //char one_string[14] = "hello, world\n";

    printf("%s", one_string);

    return 0;
}