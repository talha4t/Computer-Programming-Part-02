#include <stdio.h>

int x = 1;

void myfnc(int y)
{
    y = y + 2;
    x = x + 10;

    printf("myfnc, x = %d, y = %d\n", x, y); // x = 11, y = 7 (my ans)
    // x = 20, y = 7
}

int main()
{
    int y = 5;

    x = 10;

    myfnc(y);

    printf("main, x = %d, y = %d\n", x, y); // x = 10, y = 5 (my ans)
    // x = 20, y = 5

    return 0;
}