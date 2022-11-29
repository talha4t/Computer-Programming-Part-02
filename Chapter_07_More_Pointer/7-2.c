#include <stdio.h>
#include <stdlib.h>

int main() {

    int *marks;
    int i, n;

    printf("Please enter the number of students: ");
    scanf("%d", &n);

    //allocate memory 
    marks = (int *) malloc(sizeof(int) * n);

    if (marks == NULL) {
        printf("Memory allocation failed for marks\n");
        
        return 1;
    }

    printf("Enter the marks for each student: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Now you can see the values\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", marks[i]);
    }

    //now free memory

    free(marks);

    return 0;
}