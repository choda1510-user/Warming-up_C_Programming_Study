#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    printf("number?");
    scanf("%i", &n);
    printf("oct: 0%o\n", n);
    printf("dec: %d\n", n);
    printf("hex: 0x%x\n", n);
    return 0;
}
