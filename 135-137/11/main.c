#include <stdio.h>

int main(int argc, char *argv[])
{
    int rgb, buf;
    printf("red? ");
    scanf("%d", &buf);
    buf = buf & 0xff;
    rgb = rgb | (buf << (0 * 8));
    printf("green? ");
    scanf("%d", &buf);
    buf = buf & 0xff;
    rgb = rgb | (buf << (1 * 8));
    printf("blue? ");
    scanf("%d", &buf);
    rgb = rgb | (buf << (2 * 8));
    printf("RGB: %X\n", rgb);
    return 0;
}

