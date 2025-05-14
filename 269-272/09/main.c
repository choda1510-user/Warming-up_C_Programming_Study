#include <stdio.h>

void sum_matrix(int (*x)[3], int (*y)[3], int (*result)[3], int length);
void print_matrix(int (*matrix)[3], int length, char name[]);

int main(int argv, char *args[])
{
    int x[3][3] = { { 10, 20, 30 }, { 40, 50, 60 }, { 70, 80, 90 } }, y[3][3] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int result[3][3];
    print_matrix(x, sizeof(x) / sizeof(x[0]), "x matrix:");
    print_matrix(y, sizeof(y) / sizeof(y[0]), "y matrix:");
    sum_matrix(x, y, result, sizeof(x) / sizeof(x[0]));
    print_matrix(result, sizeof(result) / sizeof(result[0]), "x + y matrix:");
    return 0;
}
void sum_matrix(int (*x)[3], int (*y)[3], int (*result)[3], int length)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = x[i][j] + y[i][j];
        }
    }
    return;
}
void print_matrix(int (*matrix)[3], int length, char name[])
{
    int i, j;
    printf("%s\n", name);
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%-3d", matrix[i][j]);
        }
        printf("\n");
    }
    return;
}

