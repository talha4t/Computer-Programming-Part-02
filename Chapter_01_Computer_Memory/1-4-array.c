#include <stdio.h>

int main()
{
    int arr[5] = {50, 60, 70, 80, 90};

    printf("Value of Array: %d, %d, %d, %d, %d\n", arr[0],
            arr[1], arr[2], arr[3], arr[4]);
    printf("Address of ara is %p\n", arr);
    printf("Address of ara[0] is %p\n", &arr[0]);
    printf("Address of ara[1] is %p\n", &arr[1]);
    printf("Address of ara[2] is %p\n", &arr[2]);
    printf("Address of ara[3] is %p\n", &arr[3]);
    printf("Address of ara[4] is %p\n", &arr[4]);

    return 0;
}