#include <stdio.h>

void recurse() {

    char *s = "Yah! I am learning recursion";

    printf("%s\n", s);

    recurse(); 
}

int main() {

    recurse();

    return 0;
}