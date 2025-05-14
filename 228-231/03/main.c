#include <stdio.h>
#include <math.h>

double distance(int x1, int y1, int x2, int y2);

int main(int argc, char *argv[])
{
    int x1, y1, x2, y2;
    printf("head point? ");
    scanf("%d %d", &x1, &y1);
    printf("tail point? ");
    scanf("%d %d", &x2, &y2);
    printf("distance of (%d, %d) ~ (%d, %d): %f\n", x1, y1, x2, y2, distance(x1, y1, x2, y2)); 
    return 0;
}

double distance(int x1, int y1, int x2, int y2)
{
    int x = x2 - x1 < 0 ? -1 * (x2 - x1) : x2 - x1;
    int y = y2 - y1 < 0 ? -1 * (y2 - y1) : y2 - y1;
    return sqrt(x * x + y * y);
}

