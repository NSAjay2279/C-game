#include <stdio.h>

int main(int argc, const char *argv[])
{
    int const array[10] = {10,2,3,4,5,6,78,9,4,6};

    for(int i=0; i<10; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
