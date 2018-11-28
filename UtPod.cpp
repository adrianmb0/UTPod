//
//  UtPod.cpp
//  
//
//  Created by David Fernandez and Adrian Melo on 10/28/18.
//

#include <stdio.h>
#include "UtPod.h"
#include "song.h"
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

     input parms - Song s

     output parms - 0 for a successful add, -1 for unsuccessful add
     */

    int UtPod::addSong(Song const &s2) {
        SongNode *temp = songs;

        if ((UtPod::getRemainingMemory()) >= s2.getSize()) {
            //add song to beginning;
            SongNode *newSong = new SongNode;                  //create newSong node

            newSong->s = s2;

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

    /* FUNCTION - int removeSong
     * attempts to remove a song from the UtPod
     * removes the first instance of a song that is in the the UtPod multiple times
     o returns 0 if successful
     o returns -1 if nothing is removed


     input parms - Song s

     output parms - 0 for a successful remove, -1 for unsuccessful remove -2 for Song Not found
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

     input parms - None

     output parms - None
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
        //Condition for if there are less than two songs in the list
        if(count > 2){
            unsigned int currentTime =  (unsigned)time(0);

            srand(currentTime);                         //seed random time to rand number generator

            for(int i=0; i< 2*count ; i++) {

                int rndBound1 = (rand() % count);       //see random numbers
                int rndBound2 = (rand() % count);

                point1 = songs;                         //set pointers to the beginning of the song list
                point2 = songs;

                if(point1->next == NULL || point1->next->next == NULL){
                    //don't shuffle
                }else {
                    for (int j = 0; j < rndBound1; j++) {   //find a random node
                        point1 = point1->next;
                    }

                    for (int k = 0; k < rndBound2; k++) {   //find a random node to swap with.
                        point2 = point2->next;
                    }
                    songTemp = point1->s;
                    point1->s = point2->s;
                    point2->s = songTemp;
                }
            }
        }
    }



    /* FUNCTION - void showSongList
     * prints the current list of songs in order from first to last to standard output
     * format - Title, Artist, size in MB (one song per line)

     input parms - None

     output parms - None
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

     input parms - NONE

     output parms - NONE
     */

    void UtPod::sortSongList() {
        Song temp;
        SongNode *point1;
        SongNode *point2;
        bool swap;

        // Bubble Sort Algorithm //

        if(getRemainingMemory() != getTotalMemory()){
            do {
                swap = false;                               //NO swap has been made ... yet
                point1 = songs;
                point2 = point1->next;                      //set pointers to beginning nodes of the list
                while (point2 != NULL) {
                    if (point1->s < point2->s) {             //if the first song is higher than the second song
                        temp = point1->s;                  //SWAP
                        point1->s = point2->s;
                        point2->s = temp;
                        swap = true;                       //set SWAP to true
                        point1 = point2;
                        point2 = point2->next;
                    } else {
                        point1 = point1->next;              //otherwise don't swap and move to next 2 nodes
                        point2 = point2->next;
                    }
                }
            } while (swap);                                   //While a swap has been made, the list may not be completely sorted so keep going
        }}



    /* FUNCTION - void clearMemory
     * clears all the songs from memory

     input parms - None

     output parms - None
     */
    void UtPod::clearMemory(){
        SongNode *temp;
        SongNode *next;

        temp = songs;

        while(temp != NULL){        //Loop through the whole linked list deleting one node at a time
            next = temp->next;
            delete(temp);
            temp = next;
        }

        songs = temp;               //Comment out this and show, is MEMORY leaking or does
    }

    /* FUNCTION - int getRemainingMemory
     *  returns the amount of memory available for adding new songs

     input parms - None

     output parms - Outputs the amount of memory remaining in the UtPod
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

    //Destructor for the UtPod.
    // * Clears the whole UtPod
    UtPod::~UtPod(){
        clearMemory();
    }