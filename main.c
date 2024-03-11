#include <stdio.h>

short doubleIt(short array[])
{

    return array[0] / 2;
}

short halveIt(short number)
{
    return number/2;
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my damn program!  ***\n");

    short array[0] = {2};
    array[0] = halveIt(array);

    printf("the value of x is: %hd", x);

    return 0;
}
