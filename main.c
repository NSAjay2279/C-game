// main.c

#include <stdio.h> //stdio api


//Operators
void doSomethingWithOperators()
{
    int x = 5, y = 2;

    x = 0;

    printf("Result is: %d\n", x);
}

int main(int argc, const char *argv[])
{
    printf("*** Welcome to my damn program!  ***\n");

    doSomethingWithOperators();

    //Wait for user to hit enter before quitting
    getchar();

    return 0;
}
