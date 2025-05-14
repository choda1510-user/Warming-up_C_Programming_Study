#include <stdio.h>

int main(int argv, char *args[])
{
    int students[5][5] = {
        { 28, 28, 26, 9, 91 },
        { 30, 27, 30, 10, 97 },
        { 25, 26, 24, 8, 83 },
        { 18, 22, 22, 5, 67 },
        { 24, 25, 30, 10, 89 }
    };
    int midterm = 0, finals = 1, team_project = 2, attendance = 3, total = 4, i, j;
    double averages[5] = { 0, 0, 0, 0, 0 };
    printf("          %13s%13s%13s%13s%13s\n", "midterm", "finals", "team project", "attendance", "total");
    for (i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        int last_index = sizeof(students[0]) / sizeof(students[0][0]) - 1;
        printf("Student %d:", i + 1);
        students[i][last_index] = 0;
        for (j = 0; j < sizeof(students[0]) / sizeof(students[0][0]) - 1; j++)
        {
            printf("%13d", students[i][j]);
            averages[j] += students[i][j];
            students[i][last_index] += students[i][j];
        }
        printf("%13d", students[i][j]);
        averages[j] += students[i][j];
        printf("\n");
    }
    printf("average:   ");
    for (i = 0; i < sizeof(averages) / sizeof(averages[0]); i++)
    { 
        averages[i] /= sizeof(students) / sizeof(students[0]);
        printf("%13.1f", averages[i]);
    }
    printf("\n");
    return 0;
}

