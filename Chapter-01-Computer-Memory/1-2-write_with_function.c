#include <stdio.h>

int digit_func(char digit)
{   
    if (digit >= 48 && digit <= 58) 
        return 1;
    else 
        return 0;
}
int main() {

    char digit;
    
    scanf("%c", &digit);

    int d = digit_func(digit);

    printf("%d\n", d);

    return 0;
}



// took much time to implement
