#include <stdio.h>

int main(int argc, char *argv[])
{
    double c, f, tem;
    char degree;
    printf("temperature? ");
    scanf("%lf %c", &tem, &degree);
    if (degree == 'C')
    {
        c = tem;
        f = c * 9.0 / 5.0 + 32;
    }
    else if (degree == 'F')
    {
        f = tem;
        c = (f - 32) * (5.0 / 9.0);
    }
    printf("%.2f C == %.2f F\n", c, f);
    return 0;
}

