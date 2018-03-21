#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int character = 0;

    while (character < 256) {
        if (isprint(character)) {
            printf(" %c ", character);
        } else if (isspace(character)) {
            printf(" . ");
        } else {
            printf("%02x ", character);
        }
        character = character + 1;
        if ((character % 16) == 0) {
            printf("\n");
        }
    }
}