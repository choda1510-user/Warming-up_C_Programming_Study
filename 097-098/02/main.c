#include <stdio.h>

int main(int argc, char *argv[])
{
    int width, height;
    printf("width: ");
    scanf("%d", &width);
    printf("height: ");
    scanf("%d", &height);
    printf("ractangle wide: %d\n", width * height);
    printf("ractangle round: %d\n", width * 2 + height * 2);
    return 0;
}

