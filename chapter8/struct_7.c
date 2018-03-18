#include <stdio.h>

int main(int argc, char *argv[])
{
    // struct tag_question {
    //     char character;
    //     double number;
    // };
    // struct tag_question {
    //     char   c1;
    //     double d1;
    //     char   c2;
    //     double d2;
    //     char   c3;
    //     double d3;
    //     char   c4;
    //     double d4;
    //     char   c5;
    //     double d5;
    //     char   c6;
    //     double d6;
    //     char   c7;
    //     double d7;
    //     char   c8;
    //     double d8;
    // };
    struct tag_question {
        double d1;
        double d2;
        double d3;
        double d4;
        double d5;
        double d6;
        double d7;
        double d8;
        char   c1;
        char   c2;
        char   c3;
        char   c4;
        char   c5;
        char   c6;
        char   c7;
        char   c8;
    };

    printf("size of question is %zu\n", sizeof(struct tag_question));

    return 0;    
}