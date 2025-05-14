#include <stdio.h>

int main(int argv, char *args[])
{
    int arr[10];
    int first, com_diff, i;
    printf("first? ");
    scanf("%d", &first);
    printf("common difference? ");
    scanf("%d", &com_diff);
    printf("sequance: ");
    for (i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        arr[i] = first + com_diff * i;
        printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}

