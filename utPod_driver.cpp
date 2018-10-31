/* utPod_driver.cpp
 Demo Driver for the UtPod.
 
 Roger Priebe
 EE 312 10/16/18
 
 This is a basic driver for the UtPod.
 
 You will want to do more complete testing.
 
 */
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[]) {

// SONG TESTER //
    Song s("Beatles", "Hey Jude", 5);

    Song s2("Beatles", "Hey Jude", 4);

    Song s3("A", "Hey Jude", 5);

    Song s4("AABB", "Hey Jude", 5);

    Song s5("Beatles", "Hey Jude", 5);

    Song s6("Beatles", "Hey Jude2", 5);

    Song s7("A", "Hey Jude", 5);

    Song s8("A", "Hey Jude", 5);

    if (s3 > s4) {  //Expected True
        cout << "Operator greater than artist Works" << endl;
    } else {
        cout << "'>' operator artist didn't work" << endl;
    }

    if (s5 > s6) { //Expected True
        cout << "Operator greater than title Works" << endl;
    } else {
        cout << "'>' operator title didn't work" << endl;
    }

    if (s > s2) { //Expected True
        cout << "Operator greater than size compare Works" << endl;
    } else {
        cout << "'>' operator size compare didn't work" << endl;
    }

    if (s7 > s8) { //Expected fallthrough hence else
        cout << "Operator greater than didn't work" << endl;
    } else {
        cout << "'>' operator greater than works" << endl;
    }

    if (s4 < s3) {  //Expected True
        cout << "Operator '<'  artist Works" << endl;
    } else {
        cout << "'>' operator artist didn't work" << endl;
    }

    if (s6 < s5) { //Expected True
        cout << "Operator '<' title Works" << endl;
    } else {
        cout << "'>' operator title didn't work" << endl;
    }

    if (s2 < s) { //Expected True
        cout << "Operator '<'  size compare Works" << endl;
    } else {
        cout << "'<' operator size compare didn't work" << endl;
    }

    if (s8 < s7) { //Expected fallthrough hence else
        cout << "Operator '<' didn't work" << endl;
    } else {
        cout << "Operator '<' works" << endl;
    }

    if (s7 == s8) { //Expected True
        cout << "Operator '==' works" << endl;
    } else {
        cout << "Operator '==' incorrect" << endl;
    }

    if (s == s2) { //Expected False
        cout << "Operator '==' incorrect" << endl;
    } else {
        cout << "Operator '==' works" << endl;
    }
}

    /*
    UtPod t;

    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;
    
    t.showSongList();
    
    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;
    
    t.showSongList();
    
    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;
    
    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;
    
    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    
    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;
    
    t.showSongList();
    
    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;
    
    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;
    
    
    t.showSongList();
    
    result = t.addSong(s5);
    cout << "add result = " << result << endl;
    
    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;
     }
    */

