#include <stdio.h>

int main(int argc, char *argv[])
{
    const double yd_per_m = 0.9144;
    double yd, m;
    printf("yd? ");
    scanf("%lf", &yd);
    m = yd * yd_per_m;
    printf("%.0f yd = %f\n", yd, m);
    return 0;
}

