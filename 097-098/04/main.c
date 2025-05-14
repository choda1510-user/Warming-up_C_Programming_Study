#include <stdio.h>

int main(int argc, char *argv[])
{
    double width, height, area;
    printf("width and height? ");
    scanf("%lf %lf", &width, &height);
    area = width * height / 2;
    printf("triangle area: %.2f\n", area);
    return 0;
}

