//
//  song.cpp
//  
//
//  Created by David Fernandez and Adrian Melo on 10/28/18.
//

#include <stdio.h>
#include <cstring>
#include "song.h"
#include <iostream>

using namespace std;
Song::Song(){
    artist = "";
    title = "";
    size = 512;
}

Song::Song(string _title, string _artist, int _size){
    if(_artist != "") {
        artist = _artist;
    }else{
        //cout<<"Artist can't be blank"<<endl;
    }

    if(_title != "") {
        title = _title;
    }else{
        //cout<<"Title can't be blank"<<endl;
    }

    if(_size>0) {
        size = _size;
    }else{
        //cout<<"Size cannot be <= 0"<<endl;
    }
}

int Song::getSize() const{
    return size;
}

bool Song::operator<(Song const &rhs) {

    if (artist > rhs.artist) {
        return true;
    }

    if (artist < rhs.artist) {
        return false;
    }

    if (title > rhs.title) {
        return true;
    }

    if (title < rhs.title) {
        return false;
    }

    if (size > rhs.size){
        return true;
    }else{
        return false;
    }
}

bool Song::operator>(Song const &rhs) {
    if (artist < rhs.artist) {
        return true;
    }

    if (artist > rhs.artist) {
        return false;
    }

    if (title < rhs.title) {
        return true;
    }

    if (title > rhs.title) {
        return false;
    }

    if (size < rhs.size){
        return true;
    }else{
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