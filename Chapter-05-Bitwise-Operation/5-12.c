#include <stdio.h>

int main() {

    int a[7] = {1, 2, 3, 4, 1, 2, 3};

    int ct = 0, result;
    for (int i = 0; i < 7; i++) {
        result = result ^ a[i];
    }

    printf("Result: %d\n", result);
    
    return 0;
}