#include <stdio.h>

int zeroOrOne(char ch)
{
    int i;

        if (ch >= '1' && ch <= '9') {
            return 1;
        }
    
    return 0;
}
int main()
{
    char ch;

    ch = getchar();

    int bit = zeroOrOne(ch);

    if (bit == 1) 
        printf("Number.");
    else
        printf("Character.");
    
    return 0;
}