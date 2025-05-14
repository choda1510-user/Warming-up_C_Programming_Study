#include <stdio.h>

typedef struct _point {
    int x;
    int y;
} Point;

void print_points(Point *ptr, int length);
void sort_points(Point *ptr, int length);

int main(int argc, char *argv[])
{
    Point points[10] = { { 7, 4 }, { 12, 93 }, { 22, 31 }, { 1, 20 }, { 34, 53 }, { 41, 2 }, { 32, 9 }, { 21, 31 }, { 8, 2 }, { 3, 5 } };
    printf("before sorting\n");
    print_points(points, sizeof(points) / sizeof(points[0]));
    sort_points(points, sizeof(points) / sizeof(points[0]));
    printf("after sorting\n");
    print_points(points, sizeof(points) / sizeof(points[0]));
    return 0;
}

void print_points(Point *ptr, int length)
{
    int i;
    for (i = 0; i < length; i++)
    {
        printf("(%d, %d)", ptr[i].x, ptr[i].y);
    }
    fputc('\n', stdout);
}

void sort_points(Point *ptr, int length)
{
    int i, j;
    for (i = 1; i < length; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (ptr[j].x > ptr[i].x)
            {
                Point swap = ptr[i];
                int k = i;
                for (k = i; k > j; k--)
                {
                    ptr[k] = ptr[k - 1];
                }
                ptr[j] = swap;
            }
        }
    }
}

