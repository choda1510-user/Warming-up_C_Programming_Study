#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i;
    char str[1024];
    printf("A sentence? ");
    fgets(str, sizeof(str) / sizeof(char), stdin);
    for (i = 0; str[i] != '\0' && i < sizeof(str) / sizeof(char); i++)
    {
        if (islower(str[i]))
        { 
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("%s", str);
    return 0;
}

