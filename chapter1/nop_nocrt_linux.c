int main(int argc, char *argv[])
{
}

void
_start(int args)
{
    main(0, 0);

    asm("movl   $0,%ebx\n"
        "movl   $1,%eax\n"
        "int    $0x80");
}