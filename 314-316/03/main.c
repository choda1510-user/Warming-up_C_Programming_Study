#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int arr[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 }, *parr, num, i;
    parr = arr;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("number? ");
    scanf("%d", &num);
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        *(parr + i) += num;
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

