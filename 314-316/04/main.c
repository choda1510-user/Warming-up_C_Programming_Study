#include <stdio.h>
#include <stdlib.h>

double sum_doubles(double *parr, int length);

int main(int argc, char *argv[])
{
    double arr[5];
    int i;
    printf("Enter five real numbers: ");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        scanf("%lf", arr + i);
    }
    printf("sum: %f\n", sum_doubles(arr, sizeof(arr) / sizeof(arr[0])));
    return 0;
}

double sum_doubles(double *parr, int length)
{
    int i;
    double result;
    for (i = 0, result = 0; i < length; i++)
    {
        result += parr[i];
    }
    return result;
}

