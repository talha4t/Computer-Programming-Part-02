#include <stdio.h>
#include <string.h>

void string_reverse(int len, char ch[]) {

    if (len == -1)
        return;

    printf("%c", ch[len]);
    string_reverse(len - 1, ch);
}

int main() {

    
    char ch[50];
    scanf("%s", ch);
    int len = strlen(ch) - 1;

    string_reverse(len, ch);

    return 0;
}