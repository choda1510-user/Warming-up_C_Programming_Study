#include <stdio.h>

typedef enum _jangr
{
    ballad, hip_hop, soul, dance, pop
} song_jangr;

typedef struct _song
{
    char name[64];
    char signer[64];
    song_jangr jangr;
} song;
char* song_jangr_string(song_jangr j);
void print_all(song *ptr, int length, int size);

int main(int argc, char *argv[])
{
    song list[10] = { { "song1", "singer1", ballad }, { "song2", "singer2", ballad }, { "song3", "singer3", hip_hop } };
    print_all(list, sizeof(list)/sizeof(song), 3);
    return 0;
}

char* song_jangr_string(song_jangr j)
{
    switch(j)
    {
        case ballad:
            return "ballad";
        case hip_hop:
            return "hip_hop";
        case soul:
            return "soul";
        case dance:
            return "dance";
        case pop:
            return "pop";
    }
    return "empty";
}
void print_all(song *ptr, int length, int size)
{
    int i = 0;
    printf("%-10s %-10s %-10s\n", "title", "artist", "jangr");
    for(i = 0; i < size; i++)
    {
        printf("%-10s %-10s %-10s\n", ptr[i].name, ptr[i].signer, song_jangr_string(ptr[i].jangr));
    }
}
