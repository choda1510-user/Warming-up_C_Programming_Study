#include <stdio.h>
#include <stdlib.h>

int find_in_array(int *arr, int length, int key, int *index_arr);

int main(int argc, char *argv[])
{
    int arr[10], key, index_arr[10], i, length, num;
    length = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < length; i++)
    {
        scanf("%d", arr + i);
    }
    printf("What would you find the number? ");
    scanf("%d", &key);
    printf("The number(s) is(are) %d.\n", (num = find_in_array(arr, length, key, index_arr)));
    printf("A indexes of finding result: ");
    for (i = 0; i < num; i++)
    {
        printf("%3d", index_arr[i]);
    }
    printf("\n");
    return 0;
}

int find_in_array(int *arr, int length, int key, int *index_arr)
{
    int count, i, j;
    for (i = 0, j = 0, count = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            count++;
            index_arr[j] = i;
            j++;
        }
    }
    return count;
}

