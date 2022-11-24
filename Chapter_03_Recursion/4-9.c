#include <stdio.h>

void recurse(int count) {
    if (count > 5)
        return;
    
    printf("count: %d\n", count);

    recurse(count + 1);

    printf("Count = %d\n", count);
}

int main() {

    recurse(1);

    return 0;
}

// 1
// 2
// 3
// 4
// 5
// 5
// 4
// 3
// 2
// 1