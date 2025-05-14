#include <stdio.h>

struct point {
    int x;
    int y;
};
void sort_by_x(struct point *list, int length);
void print_point_list(struct point *list, int length);

int main(int argc, char *argv[])
{
    struct point list[10] = {
        { 7, 4},
        {12, 9},
        {22, 31},
        {1, 20},
        {34, 53},
        {41, 2},
        {32, 9},
        {21, 31},
        {8, 2},
        {3, 5}
    };
    int length = sizeof(list) / sizeof(struct point);
    printf("before sort\n");
    print_point_list(list, length);
    sort_by_x(list, length);
    printf("after sort\n");
    print_point_list(list, length);
    return 0;
}
void print_point_list(struct point *list, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("(%d, %d)", (*(list + i)).x, (*(list + i)).y);
    }
    putchar('\n');
    return;
}
void sort_by_x(struct point *list, int length)
{
    int i, j;
    for (i = 1; i < length; i++)
    {
        for (j = 0; j < i; j++)
        {
            if ((*(list + j)).x > (*(list + i)).x)
            {
                struct point tmp = *(list + i);
                int k;
                for (k = i; k > j; k--)
                {
                    *(list + k) = *(list + k - 1);
                }
                *(list + j) = tmp;
                break;
            }
        }
    }
    return;
}
