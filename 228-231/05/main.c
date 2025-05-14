#include <stdio.h>

void menu();
void open_file();
void save_file();
void print_();

int main(int argc, char *argv[])
{
    int choice;
    while (1)
    {
        menu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            open_file();
            break;
        case 2:
            save_file();
            break;
        case 3:
            print_();
            break;
        case 0:
            break;
        }
        if (choice == 0)
        {
            break;
        }
    }
    return 0;
}

void menu()
{
    printf("[1.open a file  2.save a file  3.print  0.exit] choice? ");
    return;
}
void open_file()
{
    printf("execute open a file.\n");
    return;
}
void save_file()
{
    printf("execute save a file.\n");
    return;
}
void print_()
{
    printf("execute print.\n");
    return;
}

