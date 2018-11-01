//
//  UtPod.cpp
//  
//
//  Created by David Fernandez on 10/28/18.
//

#include <stdio.h>
#include "UtPod.h"
#include "Song.h"
#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

    UtPod::UtPod(){
        memSize = MAX_MEMORY;           //Not sure if we should be using memSize
    }

    UtPod:: UtPod(int size){
        if(size>MAX_MEMORY || size<=0){
            memSize = MAX_MEMORY;
        }else{
            memSize = size;
        }
    }

    /* FUNCTION - int addSong
     * attempts to add a new song to the UtPod
     o returns a 0 if successful
     o returns -1 if not enough memory to add the song

     precondition: s is a valid Song

     input parms -

     output parms -
     */

    int UtPod::addSong(Song const &s) {
        if ((UtPod::getRemainingMemory()) != 0) {
            //add song to beginning;
            SongNode *newSong = new SongNode;                  //create newSong node
            SongNode *temp = songs;

            newSong->s = s;

            if(temp == NULL){
                songs = newSong;
                songs->next = NULL;
                return SUCCESS;
            }else {
                while (temp->next != NULL) {
                    temp = temp->next;
                }

                temp->next = newSong;
                newSong->next = NULL;
                return SUCCESS;
            }
        }
        return NO_MEMORY;
    }

       /*if(getRemainingMemory() == memSize){    //if Memory is completely empty (NO SONGS ADDED)
                songs = newSong;                //head song gets the first song
                newSong->next = NULL;           //make the song you're adding an end node
            }else{
                newSong->next = songs;      //add song to the next
                songs = newSong;            //songTail is updated
            }
            return SUCCESS;
        }else{
            return NO_MEMORY;
        }*/


    /* FUNCTION - int removeSong
     * attempts to remove a song from the UtPod
     * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


     input parms -

     output parms -
     */

    int UtPod::removeSong(Song const &s){

        SongNode *prev;
        SongNode *temp;

        temp = songs;
        prev = songs;

        while(temp != NULL){
            if(temp->s == s) {
                if (temp == songs) {
                    songs = temp->next;
                }
                prev->next = temp->next;
                delete (temp);
                return SUCCESS;
            }
            prev = temp;
            temp = temp->next;

        }
        return NOT_FOUND;
    }


    /* FUNCTION - void shuffle
     *  shuffles the songs into random order
     o will do nothing if there are less than two songs in the current list

     input parms -

     output parms -
     */

    void UtPod::shuffle(){
        Song songTemp("","", 0);
        SongNode *point1;
        SongNode *point2;

        SongNode *temp = songs;

        int count =0;

        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        unsigned int currentTime =  (unsigned)time(0);

        srand(currentTime);                     //seed random time to rand number generator

        for(int i=0; i< 2*count ; i++) {

            int rndBound1 = (rand() % count);
            int rndBound2 = (rand() % count);

            point1 = songs;
            point2 = songs;


            for (int j = 0; j < rndBound1; j++) {
                point1 = point1->next;
            }

            for (int k = 0; k < rndBound2; k++) {
                point2 = point2->next;
            }
            songTemp = point1->s;
            point1->s = point2->s;
            point2->s = songTemp;
        }



    }



    /* FUNCTION - void showSongList
     * prints the current list of songs in order from first to last to standard output
     * format - Title, Artist, size in MB (one song per line)

     input parms -

     output parms -
     */

    void UtPod::showSongList(){
        SongNode *temp;

        temp = songs;

        while(temp != NULL){
            cout << temp->s.getTitle()<< ", " << temp->s.getArtist()<< ", "<< temp->s.getSize() << "MB" << endl;
            temp = temp->next;
        }
    }


    /* FUNCTION - void sortSongList
     *  sorts the songs in ascending order
     o will do nothing if there are less than two songs in the current list

     input parms -

     output parms -
     */

    void UtPod::sortSongList() {

        Song songTemp("", "", 0);

        SongNode *point1 = songs;
        SongNode *point2 = songs->next;


        SongNode *min = new SongNode;

        while (point1->next != NULL) {
            min->s = point1->s;

            while (point2 != NULL) {
                if (min->s > point2->s) {
                    min->s = point2->s;
                }
                point2 = point2->next;
            }

            SongNode *temp = songs;

            while(temp != NULL){
                if(min->s == temp->s){
                    break;
                }
                temp = temp->next;
            }

            songTemp = point1->s;
            point1->s = min->s;
            temp->s = songTemp;
            point1 = point1->next;
            point2 = point1->next;
        }
    }



    /* FUNCTION - void clearMemory
     * clears all the songs from memory

     input parms -

     output parms -
     */
    void UtPod::clearMemory(){
        SongNode *temp;
        SongNode *next;

        temp = songs;

        while(temp != NULL){
            next = temp->next;
            delete(temp);
            temp = next;
        }

        songs = temp;               //Comment out this and show, is MEMORY leaking or does
                                    //deconstructor take care of this?
    }

    /* FUNCTION - int getRemainingMemory
     *  returns the amount of memory available for adding new songs

     input parms -

     output parms -
     */

    int UtPod::getRemainingMemory(){
        int usedMem = 0;

        SongNode *temp = songs;

        while(temp != NULL){
            usedMem += temp->s.getSize();
            temp = temp->next;
        }
        return ((UtPod::getTotalMemory()) - usedMem);       //return the total mem - used mem
    }

    UtPod::~UtPod(){

    }