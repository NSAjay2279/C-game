// main.c

#include <stdio.h> //stdio api


//Operators
void doSomethingWithOperators()
{
    int x = 5, y = 2;

    x = 5;
    x = x + y;
    y = x - y;
    x = x * 5;
    y = x / 5;

    x += y;
    x *= y;
    x/= 5;
    x-= y;

    x = 5;
    int z = x++;
    x = 5;
    z = ++x;

    x = x - 1;
    x--;

    x = 1;
    x = !x;
    printf("x is %d\n", x)

    //? :


    printf("Result is: %d\n", x);
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my damn program!  ***\n");

    doSomethingWithOperators();

    //Wait for user to hit enter before quitting
    //getchar();

    return 0;
}
