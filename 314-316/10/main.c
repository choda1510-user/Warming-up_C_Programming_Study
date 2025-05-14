#include <stdio.h>
#include <stdlib.h>

void sequance(int *arr, int length, int first, int common_difference);

int main(int argc, char *argv[])
{
    int arr[10], first, common_difference, i;
    printf("first? ");
    scanf("%d", &first);
    printf("common difference? ");
    scanf("%d", &common_difference);
    sequance(arr, sizeof(arr) / sizeof(int), first, common_difference);
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return 0;
}
void sequance(int *arr, int length, int first, int common_difference)
{
    int i;
    arr[0] = first;
    for (i = 1; i < length; i++)
    {
        arr[i] = arr[i - 1] + common_difference;
    }
    return;
}

