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


int main(int argc, char *argv[])
{
    song list[10] = { { "song1", "singer1", ballad }, { "song2", "singer2", ballad }, { "song3", "singer3", hip-hop } };

    return 0;
}

