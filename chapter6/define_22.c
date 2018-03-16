#ifdef TEST
int main(int argc, char *argv[])
{
    printf("hello, world\n");
    
    return 0;
}
#else
#endif

#ifndef TEST
#else
int main(int argc, char *argv[])
{
    printf("hello, world\n");
    
    return 0;
}
#endif
