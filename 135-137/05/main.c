#include <stdio.h>

int main(int argc, char *argv[])
{
    double c, f;
    printf("F? ");
    scanf("%lf", &f);
    c = (f - 32) * 5.0 / 9.0;
    printf("%f F = %.2f C\n", f, c);
    return 0;
}

