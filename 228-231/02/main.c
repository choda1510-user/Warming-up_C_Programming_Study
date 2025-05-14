#include <stdio.h>

int rectangle_radius(int width, int height);

int main(int argc, char *argv[])
{
    int width, height;
    printf("width? ");
    scanf("%d", &width);
    printf("height? ");
    scanf("%d", &height);
    printf("rectangle radius: %d\n", rectangle_radius(width, height));
    return 0;
}

int rectangle_radius(int width, int height)
{
    return 2 * width + 2 * height;
}

