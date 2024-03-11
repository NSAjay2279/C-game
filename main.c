#include <stdio.h>

typedef struct
{
    int x, y;
    short life;
    char *name;
} Man;

int main(int argc, const char *argv[])
{
    Man man, man2;
    man.x = 50;
    man.y = 50;
    man.life = 100;
    man.name = "a man";

    man2.x = 50;
    man2.y = 100;
    man2.life = 100;
    man2.name = "a man 2";

    printf("Name of man2: %s\n", man2.name);
    return 0;
}
