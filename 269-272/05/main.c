#include <stdio.h>

int main(int argv, char *args[])
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    double swap;
    int i;
    printf("array:  ");
    for (i = 0; i < sizeof(arr) / sizeof(double); i++)
    {
        printf(" %.1f", arr[i]);
    }
    printf("\n");
    for (i = 1; i <= sizeof(arr) / sizeof(double) / 2; i++)
    {
        swap = arr[i - 1];
        arr[i - 1] = arr[sizeof(arr) / sizeof(double) - i];
        arr[sizeof(arr) / sizeof(double) - i] = swap;
    }
    printf("inverse:");
    for (i = 0; i < sizeof(arr) / sizeof(double); i++)
    {
        printf(" %.1f", arr[i]);
    }
    printf("\n");
    return 0;
}
