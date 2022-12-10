#include <stdio.h>

void func() {

    int a = 10;
    static int s = 10;

    a = a + 2;
    s = s + 2;
}

int main() {

    func();
    func();
    func();

    return 0;
}