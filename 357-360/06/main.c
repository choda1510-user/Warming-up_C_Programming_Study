#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp_ic(const char *lhs, const char *rhs);

int main(int argc, char *argv[])
{
    int result;
    char string1[64];
    char string2[64];
    char *pstr;
    printf("first sentence? ");
    fgets(string1, sizeof(string1) / sizeof(char), stdin);
    string1[strlen(string1) - 1] = '\0';
    printf("second sentence? ");
    fgets(string2, sizeof(string1) / sizeof(char), stdin);
    string2[strlen(string2) - 1] = '\0';
    result = strcmp_ic(string1, string2);
    if (result == 0)
    {
        pstr = "==";
    }
    else if (result > 0)
    {
        pstr = ">";
    }
    else
    {
        pstr = "<";
    }
    printf("%s %s %s\n", string1, pstr, string2);
    return 0;
}

int strcmp_ic(const char *lhs, const char *rhs)
{
    int i;
    int lhs_length = strlen(lhs), rhs_length = strlen(rhs);
    int length = lhs_length > rhs_length ? lhs_length : rhs_length;
    for (i = 0; i < length; i++)
    {
        if (tolower(lhs[i]) != tolower(rhs[i]))
        {
            return tolower(lhs[i]) - tolower(rhs[i]);
        }
    }
    return 0;
}

