#include <stdio.h>
#include <stdlib.h>

void swap_array(int *arr1, int *arr2, int length);
void print_array(char ch, int *arr, int length);

int main(int argc, char *argv[])
{
    int arr1[5] = { 1, 3, 5, 7, 9 }, arr2[5] = { 0, 2, 4, 6, 8 };
    print_array('a', arr1, sizeof(arr1) / sizeof(int));
    print_array('b', arr2, sizeof(arr2) / sizeof(int));
    swap_array(arr1, arr2, sizeof(arr1) / sizeof(int));
    printf("<< after swap_array was called >>\n");
    print_array('a', arr1, sizeof(arr1) / sizeof(int));
    print_array('b', arr2, sizeof(arr2) / sizeof(int));
    return 0;
}

void swap_array(int *arr1, int *arr2, int length)
{
    int i = 0, swap;
    for (i = 0; i < length; i++)
    {
        swap = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = swap;
    }
    return;
}
void print_array(char ch, int *arr, int length)
{
    int i = 0;
    printf("%c array: ", ch);
    for (i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}

