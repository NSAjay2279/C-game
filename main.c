// main.c

#include <stdio.h> //stdio api

void explainVariables()
{
    int x = 0;      //4 bytes, -2 billion to +2 billion
    short y = 0;    //2 bytes, -32 thousand to +32 thousand
    char z = 0;     //1 byte,  -127 to 128
    long whatever = 0; // 4 byte
    long long whatever2 = 0; //8bye 64-bit

    //floating point (decimals)
    float w = 1.5f;     //4 byte
    double q = 1.50000000000000000000001;     //8 byte
}

int main(int argc, const char *argv[])
{
    explainVariables();

    printf("Words\n");

    return 0;
}
