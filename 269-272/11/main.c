#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argv, char *args[])
{
    int arr[10] = { 12, 43, 39, 98, 71, 63, 8, 16, 54, 85 };
    int i, j, swap;
    srand((unsigned int)time(NULL));
    printf("before supple:");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%-3d", arr[i]);
    }
    printf("\n");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1; i++)
    {
        j = rand() % (sizeof(arr) / sizeof(arr[0]) - i - 1) + i + 1;
        swap = arr[j];
        arr[j] = arr[i];
        arr[i] = swap;
    }
    printf("after supple: ");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%-3d", arr[i]);
    }
    printf("\n");
    return 0;
}

