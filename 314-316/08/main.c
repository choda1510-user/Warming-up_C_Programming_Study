#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array_with_random(int *arr, int length);

int main(int argc, char *argv[])
{
    int arr[10], i;
    srand((int)time(NULL));
    fill_array_with_random(arr, sizeof(arr) / sizeof(int));
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return 0;
}
void fill_array_with_random(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        arr[i] = (int)rand() % 100;
    }
    return;
}

