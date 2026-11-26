#include "playliststruct.h"

void CreatePlaylistList(ListPlaylist &L){
    L.firstp = nullptr;
    L.lastp = nullptr;
}

bool isEmptyPlaylist(ListPlaylist L){
    return (L.firstp == nullptr);
}

adrplaylist createElemPlaylist(string title, string desc, string creator){
    adrplaylist p = new elemplaylist;
    p.info.title = title;
    p.info.creator = creator;
    p.info.desc = desc;
    p->firstsong = nullptr;
    p->next = nullptr;
    p->prev = nullptr;
    return p;
}

bool isEmptysong(adrplaylist p){
    return (p->firstsong == nullptr);
}

adrsongs createElemSongs(string title, string artist, string genre, int durm, int durs){
    adrsongs p = new elemsongs;
    p.info.artist = artist;
    p.info.title = title;
    p.info.genre = genre;
    p.info.durationm = durm;
    p.info.durations = durs;
    p->next = nullptr;
    p->prev = nullptr;
    return p;
}

void addPlaylist(ListPlaylist &L, adrplaylist p){
    if (isEmptyPlaylist(L)){
        L.firstp = p;
        L.lastp = p;
    } else {
        p = L.lastp->next;
        p->prev = L.lastp;
        L.lastp = p;
    }
}

void addSong(ListPlaylist &L, adrsongs s, string title){
    adrplaylist p = L.firstp;
    while (p.info.title != title && p != nullptr){
        p=p->next;
    }
    if (p==nullptr){
        cout << "Playlist with title ' " << title << " ' not found." << endl;
    } else {
        if (isEmptysong(p)){
            p->firstsong = s;
        } else {
            adrsongs q = p->firstsong;
            while (q->next != nullptr){
                q = q->next;
            }
            q->next = s;
        }
    }
}
