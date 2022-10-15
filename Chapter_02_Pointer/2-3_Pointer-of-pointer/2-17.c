#include <stdio.h>

int main() {

    char c = 'A';
    char *p, **q;

    p = &c; // stored c address in p
    q = &p; // stored p address in q
    **q = 'B';

    printf("Value of c : %c\n", c); // B
    printf("Value of c : %c\n", *p); // B
    printf("Value of c : %c\n", **q); // B

    return 0;
}