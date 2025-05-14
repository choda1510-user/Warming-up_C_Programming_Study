#include <stdio.h>

int main(int argc, char *argv[])
{
    int score;
    printf("score? ");
    scanf("%d", &score);
    if (score > 100)
    {
        printf("wrong score\n");
    }
    else if (score >= 90)
    {
        printf("A\n");
    }
    else if (score >= 80)
    {
        printf("B\n");
    }
    else if (score >= 70)
    {
        printf("C\n");
    }
    else if (score >= 60)
    {
        printf("D\n");
    }
    else if (score >= 0)
    {
        printf("F\n");
    }
    else
    {
        printf("wrong score\n");
    }
    return 0;
}

