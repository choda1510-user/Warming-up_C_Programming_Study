#include <stdio.h>
#include <stdlib.h>

void select_sort(int *arr, int length);
void print_array(int *arr, int length);

int main(int argc, char *argv[])
{
    int arr[10] = { 92, 34, 76, 32, 15, 28, 41, 55, 89, 62 };
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("before sorting ");
    print_array(arr, length);
    select_sort(arr, length);
    printf("after sorting ");
    print_array(arr, length);
    return 0;
}

void select_sort(int *arr, int length)
{
    int swap, i, j;
    for (i = 1; i < length; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int index = i;
                swap = arr[i];
                for (index = i; index > j; index--)
                {
                    arr[index] = arr[index - 1];
                }
                arr[j] = swap;
            }
        }
    }
    return;
}
void print_array(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("%3d", arr[i]);
    }
    printf("\n");
    return;
}

