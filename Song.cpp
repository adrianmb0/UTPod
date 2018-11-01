//
//  song.cpp
//  
//
//  Created by David Fernandez on 10/29/18.
//

#include <stdio.h>
#include <cstring>
#include "Song.h"

using namespace std;
Song::Song(){
    artist = "";
    title = "";
    size = 512;
}

Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
    size = _size;
}

int Song::getSize() const{
    return size;
}

bool Song::operator>(Song const &rhs) {

    if (artist > rhs.artist) {
        return true;
    }

    if (title > rhs.title) {
        return true;
    }

    if (size > rhs.size) {
        return true;
    } else {
        return false;
    }
}

bool Song::operator<(Song const &rhs) {
    if (artist < rhs.artist) {
        return true;
    }

    if (title < rhs.title) {
        return true;
    }

    if (size < rhs.size) {
        return true;
    } else {
        return false;
    }
}

bool Song::operator==(Song const &rhs){
    if (artist != rhs.artist) {
        return false;
    }

    if (title != rhs.title) {
        return false;
    }

    if (size != rhs.size) {
        return false;
    } else {
        return true;
    }
}