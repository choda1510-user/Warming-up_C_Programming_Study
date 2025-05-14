#include <stdio.h>
#include <stdlib.h>

void fill_matrix_5(int (*arr)[5], int length, int num);

int main(int argc, char *argv[])
{
    int arr[3][5], i, j, num;
    printf("number? ");
    scanf("%d", &num);
    fill_matrix_5(arr, sizeof(arr) / sizeof(arr[0]), num);
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        for (j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void fill_matrix_5(int (*arr)[5], int length, int num)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < 5; j++)
        {
            arr[i][j] = num;
        }
    }
    return;
}

