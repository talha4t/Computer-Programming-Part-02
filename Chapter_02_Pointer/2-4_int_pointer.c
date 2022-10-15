#include <stdio.h>

int main() {

    int x = 10;
    int *p;

    p = &x;

    printf("Value of x: %d\n", x); // 10

    *p = 20;

    printf("Value of x: %d\n", x); // 20
    printf("Address of x: %p\n", &x);
    printf("Value of p: %p\n", p);

    return 0;
}