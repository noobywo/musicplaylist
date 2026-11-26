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

void CreatePlaylistList(ListPlaylist &L);
bool isEmptyPlaylist(ListPlaylist L);
adrplaylist createElemPlaylist(string title, string desc, string creator);
bool isEmptysong(adrplaylist p);
adrsongs createElemSongs(string title, string artist, string genre, int durm, int durs);
void addPlaylist(ListPlaylist &L, adrplaylist p);
void addSong(ListPlaylist &L, adrsongs s, string title);

#endif // PLAYLISTSTRUCT_H_INCLUDED
