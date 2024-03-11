// main.c

#include <stdio.h> //stdio api

void explainVariables()
{
    int x = 0;      //4 bytes, -2 billion to +2 billion
    short y = 0;    //2 bytes, -32 thousand to +32 thousand
    char z = 0;     //1 byte,  -127 to 128
    long whatever = 0; // 4 byte
    long long whatever2 = 0; //8bye 64-bit

    //unsigned
    unsigned int i1= 0;  //0 to 4 billion
    unsigned char c1 = 0; //0..255

    //floating point (decimals)
    float w = 1.5f;     //4 byte
    double q = 1.50000000000000000000001;     //8 byte

    float w2;
    w = 3.0f;

    const char *str = "phrases of characters... banana";
}

void doSomething2()
{
    int x = 2, y = 5;

    x += y;

    printf("Result is: %d\n", x);
}

int main(int argc, const char *argv[])
{
    explainVariables();
    doSomething2();

    printf("Words\n");

    return 0;
}
