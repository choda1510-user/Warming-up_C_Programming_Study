#include <stdio.h>

void fill(int parr[], int length, int value);

int main(int argv, char *args[])
{
    int arr[20];
    int value, i;
    printf("What is number to fill array? ");
    scanf("%d", &value);
    fill(arr, sizeof(arr) / sizeof(int), value);
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void fill(int parr[], int length, int value)
{
    int i;
    for (i = 0; i < length; i++)
    {
        parr[i] = value;
    }
    return;
}

