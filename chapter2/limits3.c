#include <stdio.h>

int main(int argc, char *argv[])
{
    char char_min = 0x80, char_max = 0x7F;
    short short_min = 0x8000, short_max = 0x7FFF;
    int int_min = 0x80000000, int_max = 0x7FFFFFFF;
    long long long_long_min = 0x8000000000000000, long_long_max = 0x7FFFFFFFFFFFFFFF;

    unsigned char unsigned_char_min = 0x00, unsigned_char_max = 0xFF;
    unsigned short unsigned_short_min = 0x0000, unsigned_short_max = 0xFFFF;
    unsigned int unsigned_int_min = 0x00000000, unsigned_int_max = 0xFFFFFFFF;
    unsigned long unsigned_long_min = 0x00000000, unsigned_long_max = 0xFFFFFFFF;
    unsigned long long unsigned_long_long_min = 0x0000000000000000, unsigned_long_long_max = 0xFFFFFFFFFFFFFFFF;

    float float_min = -3.402823e+38, float_max = 3.402823e+38;
    double double_min = -1.797693e+308, double_max = 1.797693e+308;

    printf("char_min = %d, \nchar_max = %d\n", char_min, char_max);
    printf("short_min = %d, \nshort_max = %d\n", short_min, short_max);
    printf("int_min = %d, \nint_max = %d\n", int_min, int_max);
    printf("long_long_min = %lld, \nlong_long_max = %lld\n", long_long_min, long_long_max);

    printf("unsigned_char_min = %u, \nunsigned_char_max = %u\n", unsigned_char_min, unsigned_char_max);
    printf("unsigned_short_min = %u, \nunsigned_short_max = %u\n", unsigned_short_min, unsigned_short_max);
    printf("unsigned_int_min = %u, \nunsigned_int_max = %u\n", unsigned_int_min, unsigned_int_max);
    printf("unsigned_long_min = %lu, \nunsigned_long_max = %lu\n", unsigned_long_min, unsigned_long_max);
    printf("unsigned_long_long_min = %llu, \nunsigned_long_long_max = %llu\n", unsigned_long_long_min, unsigned_long_long_max);

    printf("float_min = %f, \nfloat_max = %f\n", float_min, float_max);
    printf("double_min = %f, \ndouble_max = %f\n", double_min, double_max);

    return 0;
}