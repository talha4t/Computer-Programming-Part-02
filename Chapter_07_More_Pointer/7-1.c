#include <stdio.h>

int main() {

    int *marks;
    int i, n;

    printf("Please enter the number of students: ");
    scanf("%d", &n);

    // now allocation memory 
    marks = (int *) malloc(sizeof(int) * n);

    printf("Enter the marks for each students: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Now here you can see the values:\n");
    // now print the marks array
    for (int i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}