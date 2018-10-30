//
//  song.cpp
//  
//
//  Created by David Fernandez on 10/29/18.
//

#include <stdio.h>
#include <cstring>
#include "song.h"

using namespace std;

Song::Song(string _artist, string _title, int _size){
    artist = _artist;
    title = _title;
    size = _size;
}

bool Song::operator>(Song const &rhs){                  //check this before moving on
    for(int i=0; artist[i]!= "\0"; i++){
        if(artist[i]=="\0"){
            return(true);                               //edge case i.e. "AB" vs "ABC"
        }else if(artist[i]>rhs.artist[i]){
            return(false);
        }else{
            return(true);
        }
    }
    
    for(int i=0; title[i]!= "\0"; i++){
        if(title[i]>rhs.title[i]){
            return(false);
        }else{
            return(true);
        }
    }
    
    if(size>rhs.size){
        return(true);
    }else{
        return(false);
    }
    
}

bool Song::operator<(Song const &rhs){                  //check this before moving on
    for(int i=0; artist[i]!= "\0"; i++){
        if(artist[i]=="\0"){
            return(true);                               //edge case i.e. "AB" vs "ABC"
        }else if(artist[i]<rhs.artist[i]){
            return(false);
        }else{
            return(true);
        }
    }
    
    for(int i=0; title[i]!= "\0"; i++){
        if(title[i]<rhs.title[i]){
            return(false);
        }else{
            return(true);
        }
    }
    
    if(size>rhs.size){
        return(true);
    }else{
        return(false);
    }
}

bool Song::operator==(Song const &rhs){
    if(strlen(artist) != strlen(rhs.artist)){
        return(false);
    }
    for(int i=0; artist[i]!= "\0"; i++){
        if(artist[i]<rhs.artist[i]){
            return(false);
        }
    }
    
    if(strlen(title) != strlen(rhs.title)){
        return(false);
    }
    for(int i=0; title[i]!= "\0"; i++){
        if(title[i]<rhs.title[i]){
            return(false);
        }else{
            return(true);
        }
    }
    
    if(size != rhs.size){
        return(false);
    }
    if(size>rhs.size){
        return(true);
    }else{
        return(false);
    }
}
