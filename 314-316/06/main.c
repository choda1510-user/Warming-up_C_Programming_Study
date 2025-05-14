#include <stdio.h>
#include <stdlib.h>

void get_rectangle(int width, int height, int *round, int *area);

int main(int argc, char *argv[])
{
    int width, height, round, area;
    printf("width? ");
    scanf("%d", &width);
    printf("height? ");
    scanf("%d", &height);
    get_rectangle(width, height, &round, &area);
    printf("area: %d, round: %d\n", area, round);
    return 0;
}

void get_rectangle(int width, int height, int *round, int *area)
{
    *area = width * height;
    *round = 2 * width + 2 * height;
    return;
}

