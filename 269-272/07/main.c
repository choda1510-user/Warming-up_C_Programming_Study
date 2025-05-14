#include <stdio.h>

double sum(double parr[], int length);

int main(int argv, char *args[])
{
    double arr[5];
    printf("Input five numbers: ");
    scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    printf("sum: %f\n", sum(arr, sizeof(arr) / sizeof(double)));
    return 0;
}

double sum(double parr[], int length)
{
    int i;
    double sum;
    for (i = 0; i < length; i++)
    {
        sum += parr[i];
    }
    return sum;
}

