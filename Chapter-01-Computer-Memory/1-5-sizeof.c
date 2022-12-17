#include <stdio.h>

int main() {
    int num;
    char ch;
    double d_num;
    float f_num;

    printf("%lu\n", sizeof(int));

    printf("size of int: %lu\n", sizeof(num));
    printf("size of char: %lu\n", sizeof(ch));
    printf("size of double: %lu\n", sizeof(d_num));
    printf("size of float: %lu\n", sizeof(f_num));
    return 0;
}