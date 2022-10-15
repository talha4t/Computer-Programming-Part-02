#include <stdio.h>

int main() {

    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("Value of c : %c\n", c); // A
    printf("Value of c : %c\n", *p); // A
    printf("Value of c : %c\n", **q); // A

    return 0;
} 