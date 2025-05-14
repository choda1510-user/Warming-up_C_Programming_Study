#include <stdio.h>

int main(int argc, char *argv[])
{
    unsigned int data, mask1, mask2, mask3, mask4;
    mask1 = 0x000000FF;
    mask2 = 0x0000FF00;
    mask3 = 0x00FF0000;
    mask4 = 0xFF000000;
    printf("hex : ");
    scanf("%x", &data);
    printf("byte 0 : %x\n", data & mask1);
    printf("byte 1 : %x\n", (data & mask2) >> (1 * 8));
    printf("byte 2 : %x\n", (data & mask3) >> (2 * 8));
    printf("byte 3 : %x\n", (data & mask4) >> (3 * 8));
    return 0;
}

