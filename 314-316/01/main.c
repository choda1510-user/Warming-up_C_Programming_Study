#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double *parr, arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
    int i;
    parr = arr;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    { 
        printf("%.2f ", *(parr + i));
    }
    printf("\n");
    return 0;
}

