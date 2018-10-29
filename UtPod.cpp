//
//  UtPod.cpp
//  
//
//  Created by David Fernandez on 10/28/18.
//

#include <stdio.h>
#include "UtPod.h"

using namespace std;

    Song::Song(string _artist, string _title, int _size){
        artist = _artist;
        title = _title;
        size = _size;
    }

////////////

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

///////////


    UtPod::UtPod(){
        memSize = MAX_MEMORY;
    }

    UtPod:: UtPod(int size){
        if(size>MAX_MEMORY || size<=0){
            memSize = MAX_MEMORY;
        }else{
            memSize = size;
        }
    }

    int 
