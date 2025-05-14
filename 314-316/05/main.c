#include <stdio.h>
#include <stdlib.h>

void get_min_max(int *parr, int length, int *pmax, int *pmin);

int main(int argc, char *argv[])
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 }, max, min, i;
    printf("array: ");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    { 
        printf("%d ", arr[i]);
    }
    printf("\n");
    get_min_max(arr, sizeof(arr) / sizeof(arr[0]), &max, &min);
    printf("max: %d\nmin: %d\n", max, min);
    return 0;
}

void get_min_max(int *parr, int length, int *pmax, int *pmin)
{
    int i;
    *pmax = *(parr);
    *pmin = *(parr);
    for (i = 1; i < length; i++)
    { 
        if (*(parr + i) > *pmax)
        {
            *pmax = *(parr + i);
        }
        if (*(parr + i) < *pmin)
        { 
            *pmin = *(parr + i);
        }
    }
    return;
}

