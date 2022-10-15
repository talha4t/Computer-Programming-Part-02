#include <stdio.h>

int main() {

    int x = 10, y;
    int *p, *q;

    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;

    printf("Value of y: %d\n", y); // y = 20
    printf("Value of x: %d\n", x); // x = 15
    printf("Value of *p: %d\n", *p); // *p = 15
    printf("Value of *q: %d\n", *q); // *q = 20

    return 0;
}