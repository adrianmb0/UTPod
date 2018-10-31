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

Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
    size = _size;
}

bool Song::operator>(Song const &rhs){

    for (int i = 0; artist[i] != '\0'; i++) {            // is art1 > art2, true or false?
        if (rhs.artist[i] == '\0'){                      // if artist 2 hits null first, its alphabetically "larger"
            return (false);                              // i.e. "ABD" !> "AB"
        }else if (artist[i] < rhs.artist[i]) {           // if at any point, Artist 1 character is less than corresponding artist 2 char, art1 is larger
            return (true);
        }
    }

    if (artist.length() < rhs.artist.length()) {         // if art1 length is less than art2 length, and didn't chars are the same
        return (true);                                   // up until the null in art1, then art1 is alpha "larger"
    }

    for (int i = 0; title[i] != '\0'; i++) {             // is tit1 > tit2, true or false?
        if (rhs.title[i] == '\0'){                       // if title 2 hits null first, its alphabetically "larger"
            return (false);                              // i.e. "ABD" !> "AB"
        }else if (title[i] < rhs.title[i]) {             // if at any point, title 1 character is less than corresponding title 2 char, tit1 is larger
            return (true);
        }
    }

    if (title.length() < rhs.title.length()) {           // if tit1 length is less than tit2 length, and didn't chars are the same
        return (true);                                   // up until the null in tit1, then tit1 is alpha "larger"
    }
    
    if(size>rhs.size){
        return(true);
    }else{
        return(false);
    }
    
}

bool Song::operator<(Song const &rhs) {                  //check this before moving on
    for (int i = 0; artist[i] != '\0'; i++) {
        if (rhs.artist[i] == '\0') {
            return (true);                               //edge case i.e. "ABC" vs "AB"
        } else if (artist[i] > rhs.artist[i]) {
            return (false);
        }
    }

    if (artist.length() > rhs.artist.length()) {         // if art1 length is less than art2 length, and didn't chars are the same
        return (false);                                  // up until the null in art1, then art1 is alpha "larger"
    }

    for (int i = 0; title[i] != '\0'; i++) {             // is tit1 < tit2, true or false?
        if (rhs.title[i] == '\0') {                      // if title 2 hits null first, its alphabetically "larger"
            return (true);                               // "ABC" < "AB"
        } else if (title[i] > rhs.title[i]) {            // if at any point, title 1 character is less than corresponding title 2 char, tit1 is larger
            return (true);
        }
    }

    if (title.length() > rhs.title.length()) {           // if tit1 length is less than tit2 length, and didn't chars are the same
        return (false);                                  // up until the null in tit1, then tit1 is alpha "larger"
    }

    if (size < rhs.size) {
        return (true);
    } else {
        return (false);
    }
}

bool Song::operator==(Song const &rhs) {
    if (artist.length() != artist.length()) {
        return (false);
    }
    for (int i = 0; artist[i] != '\0'; i++) {
        if (artist[i] < rhs.artist[i]) {
            return (false);
        }
    }

    if (title.length() != rhs.title.length()) {
        return (false);
    }

    for (int i = 0; title[i] != '\0'; i++) {
        if (title[i] < rhs.title[i]) {
            return (false);
        }
    }

    if (size != rhs.size) {
        return (false);
    } else {
        return (true);
    }
}
