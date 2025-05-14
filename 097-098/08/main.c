#include <stdio.h>

#define INCH_PER_CM 2.54

int main(int argc, char *argv[])
{
    double in, m;
    printf("in? ");
    scanf("%lf", &in);
    m = in * INCH_PER_CM;
    printf("%.2f in = %.2f cm\n", in, m);
    return 0;
}

