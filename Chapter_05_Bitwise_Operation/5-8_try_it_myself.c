#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if (n & (n - 1)) 
        printf("%d is not a power of two", n);
    else
        printf("%d is a power of two", n);


    return 0;
}