#include <stdio.h>

int get_red(int rgb);
int get_blue(int rgb);
int get_green(int rgb);

int main(int argc, char *argv[])
{
    int rgb;
    printf("RGB? ");
    scanf("%x", &rgb);
    printf("RGB %X red: %d, green: %d, blue: %d\n", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));
    return 0;
}

int get_red(int rgb)
{
    return rgb & 0x000000FF;
}
int get_blue(int rgb)
{
    return (rgb & 0x00FF0000) >> (4 * 4);
}
int get_green(int rgb)
{
    return (rgb & 0x0000FF00) >> (4 * 2);
}

