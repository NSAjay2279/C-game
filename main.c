#include <stdio.h>

short halveIt(short number[])
{
    number[0] = 3;
    return number[1];
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my damn program! ***\n");

    short array[1] = {2};
    array[0] = halveIt(array);

    printf("the value of array[0] is: %hd", array[0]);

    return 0;
}
