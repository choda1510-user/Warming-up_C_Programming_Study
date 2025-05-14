#include <stdio.h>

int main(int argv, char *args[])
{
    double arr[10];
    double first, com_rat;
    int i;
    printf("first? ");
    scanf("%lf", &first);
    printf("common ratio? ");
    scanf("%lf", &com_rat);
    printf("sequance:");
    for (i = 0; i < sizeof(arr) / sizeof(double); i++)
    {
        int j;
        arr[i] = first;
        for (j = 0; j < i; j++)
        {
            arr[i] *= com_rat;
        }
        printf(" %.0f", arr[i]);
    }
    printf("\n");
    return 0;
}

