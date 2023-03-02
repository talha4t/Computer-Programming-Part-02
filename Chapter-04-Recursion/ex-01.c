#include <stdio.h>

int s;
int sum(int n) {

    if (n == 0)
        return s;

    s += n;
    sum(n - 1);

}
int main() {

    int n;
    scanf("%d", &n);

    printf("%d",sum(n));

    return 0;
} 