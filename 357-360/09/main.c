#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valied_id(char *id, char **msg);

int main(int argc, char *argv[])
{
    char id[64];
    char *msg;
    int is_valied;

    do
    {
        printf("ID? ");
        fgets(id, sizeof(id) / sizeof(char), stdin);
        id[strlen(id) - 1] = '\0';
        is_valied = is_valied_id(id, &msg);
        if (is_valied)
        {
            printf("%s ", id); 
        }
        printf("%s\n", msg);
    } while (!is_valied);
    return 0;
}

int is_valied_id(char *id, char **msg)
{
    if (strlen(id) < 8)
    {
        *msg = "ID must be longer than 8.";
        return 0;
    }
    else if (isdigit(id[0]))
    { 
        *msg = "ID must start text.";
        return 0;
    }
    else
    {
        *msg = "is able to use by ID";
        return 1;
    }
}

