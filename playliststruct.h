#ifndef PLAYLISTSTRUCT_H_INCLUDED
#define PLAYLISTSTRUCT_H_INCLUDED
#include <iostream>

using namespace std;

typedef struct elemplaylist *adrplaylist;
typedef struct elemsongs *adrsongs;

struct songs{
    string title;
    string artist;
    string genre;
    int durationm;
    int durations;
};

struct elemsongs {
    songs info;
    adrsongs next;
    adrsongs prev;
};

struct playlist {
    string title;
    string desc;
    string creator;
};

struct elemplaylist {
    playlist info;
    adrplaylist next;
    adrplaylist prev;
    adrsongs firstsong;
};

struct ListPlaylist {
    adrplaylist firstp;
    adrplaylist lastp;
};

#endif // PLAYLISTSTRUCT_H_INCLUDED
