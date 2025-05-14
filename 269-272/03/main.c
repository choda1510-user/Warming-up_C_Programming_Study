#include <stdio.h>

int main(int argv, char *args[])
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    int max, min, i;
    printf("array:");
    max = arr[0];
    min = arr[0];
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf(" %d", arr[i]);
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("\nmax: %d\nmin: %d\n", max, min);
    return 0;
}

