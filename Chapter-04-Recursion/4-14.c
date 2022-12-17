#include <stdio.h>
#include <string.h>

int fib[50];
int f_calls = 0;

int fibo(int n) {
    
    f_calls = f_calls + 1;

    if (fib[n] != 0)
        return fib[n];
    
    if (n == 1 || n == 2)
        return fib[n];
    
    fib[n] = fibo(n - 1) + fibo(n - 2);

    return fib[n];
}
int main() {

    int n;
    char s[3];

    fib[1] = 1;
    fib[2] = 1;
    
    scanf("%d", &n);

    if (n == 1)
        strcpy(s, "st");
    else if (n == 2)
        strcpy(s, "nd");
    else if (n == 3)
        strcpy(s, "rd");
    else 
        strcpy(s, "th");

    printf("%d%s fibonacci number is %d\n", n, s, fibo(n));
    printf("Number of function calls : %d\n", f_calls);

}