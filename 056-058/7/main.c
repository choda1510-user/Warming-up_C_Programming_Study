#include <stdio.h>

int main(int argc, char *argv[])
{
    double a, b;
    printf("real number 2?");
    scanf("%lf %lf", &a, &b);
    printf("%f + %f = %f\n", a, b, a + b);
    printf("%f - %f = %f\n", a, b, a - b);
    return 0;
}

