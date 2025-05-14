#include <stdio.h>

int main(int argv, char *args[])
{
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
    int target, i;
    printf("target? ");
    scanf("%d", &target);
    for (i = sizeof(arr) / sizeof(int) - 1; i >= 0; i--)
    {
        if (arr[i] == target)
        {
            printf("target is %d\n", i + 1);
            break;
        }
    }
    if (i == -1)
    {
        printf("error\n");
    }
    return 0;
}

