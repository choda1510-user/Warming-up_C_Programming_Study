#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double arr[3], *parr;
    int i;
    parr = arr;
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("address of a x[%d] : %p\n", i, parr + i);
    }
    return 0;
}

