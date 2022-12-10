#include <stdio.h>

void func()
{
    int a = 10;
    static int s = 10;

    a = a + 2;
    s = s + 2;

    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    func(); // a = 12, s = 12
    func(); // a = 12, s = 14
    func(); // a = 12, s = 16
}