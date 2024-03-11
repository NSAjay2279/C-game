#include <stdio.h>

short doubleIt(short number)
{
    rerurn number*2;
}

short halveIt(short number)
{
    return number/2;
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my damn program!  ***\n");

    short x = 2;
    x = halveIt(x);

    printf("the value of x is: %i", x);

    return 0;
}
