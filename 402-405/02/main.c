#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define _ID_LENGTH_ 32
#define _PW_LENGTH_ 32

struct login_info
{
    char id[_ID_LENGTH_];
    char pw[_PW_LENGTH_];
};

void lower_login_info(struct login_info *info);
void print_login_info(struct login_info *info);

int main(int argc, char *argv[])
{
    int i;
    struct login_info info;
    printf("ID? ");
    fgets(info.id, _ID_LENGTH_, stdin);
    for(i = 0; i < _ID_LENGTH_; i++)
    {
        if(info.id[i] == '\n')
        {
            info.id[i] = '\0';
            break;
        }
    }
    printf("PW? ");
    fgets(info.pw, _PW_LENGTH_, stdin);
    for(i = 0; i < _PW_LENGTH_; i++)
    {
        if(info.pw[i] == '\n')
        {
            info.pw[i] = '\0';
            break;
        }
    }
    lower_login_info(&info);
    print_login_info(&info);
    return 0;
}

void lower_login_info(struct login_info *info)
{
    int i;
    for(i = 0; i < _ID_LENGTH_ && (*info).id[i] != '\0'; i++)
    {
        info->id[i] = tolower(info->id[i]);
    }
    for(i = 0; i < _PW_LENGTH_ && (*info).pw[i] != '\0'; i++)
    {
        info->pw[i] = tolower(info->pw[i]);
    }
    return;
}
void print_login_info(struct login_info *info)
{
    int i, size;
    printf("ID: %s\nPW: ", info->id);
    size = strlen(info->pw);
    for(i = 0; i < size; i++)
    {
        fputc('*', stdout);
    }
    fputc('\n', stdout);
    return;
}

