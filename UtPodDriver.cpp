/* utPod_driver.cpp
 Demo Driver for the UtPod.
 
 Roger Priebe
 EE 312 10/16/18
 
 This is a basic driver for the UtPod.
 
 You will want to do more complete testing.

 Edited by: David Fernandez and Adrian Melo

 */
#include <cstdlib>
#include <iostream>
#include "Song.h"
#include "UtPod.h"

using namespace std;

int main(int argc, char *argv[]) {

    UtPod t;
    UtPod t2(256);

    ////TEST UtPod CONSTRUCTOR////

    UtPod t3(600);             //should be limited to 512MB

    if (t3.getTotalMemory() == 512) {
        cout << "Successful limiting UtPod memory to 512MB" << endl;
    } else {
        cout << "Failed limiting UtPod memory to 512MB" << endl;
    }

    UtPod t4(-14);
    //Check memory set at less than zero
    if (t4.getTotalMemory() == 512) {
        cout << "Successful auto sizing UtPod memory to 512MB" << endl;
    } else {
        cout << "Failed auto sizing UtPod memory to 512MB" << endl;
    }


    /////////////////////////

    ////TEST SetSong functions///////
    // Song Error Testers
    Song test("", "ABA", 5);

    Song test2("ABA", "", 6);

    Song test3("ABA", "ABA", 0);

    //Song set testers

    Song stest("artist1", "title1", 1);

    cout << stest.getArtist() << endl;

    cout << stest.getTitle() << endl;

    cout << stest.getSize() << endl;

    ////////////////////////////
    /// Add Song

    Song stest2("artist2", "title2", 510);

    // Successful Add Check
    int result = t.addSong(stest2);
    cout << "result = " << result << endl;   // Expected 0


    cout << "result = " << result << endl;   // Expected 0
    result = t.addSong(test);

    //Error Check
    cout << "result = " << result << endl << endl;   // Expected -1

    /////////////
    //Destructor Check
    ////////

    t.~UtPod();       //clear memory
    cout << t.getTotalMemory() << endl;

    ////////////

    Song s1("Artist1", "Title1", 1);
    result = t.addSong(s1);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s2("Artist2", "Title2", 2);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s3("Artist3", "Title3", 3);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Artist4", "Title4", 4);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Artist5", "Title5", 5);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.shuffle();
    cout << "SHUFFLED"<< endl;

    t.showSongList();

    t.sortSongList();
    cout << "SORTED"<< endl;

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

    result = t.addSong(s4);
    cout << "add result = " << result << endl;

    t.shuffle();                //should not shuffle s5, s4 Should print out in order s5, s4

    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;

    cout<<"removal of song (0 = success) (-1 = not removed), (-2 Not Found)" <<t.removeSong(s5)<<endl;
    t.removeSong(s4);

    t.sortSongList();

    cout<<"removal of song (0 = success) (-1 = not removed), (-2 Not Found)"<<t.removeSong(s5)<<endl;       //should not remove anything and be ok

    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;

    t.clearMemory();

    cout << "memory = " << t.getRemainingMemory() << endl;
    t.showSongList();



    //TEST OPERATORS

    if(s1>s2) {
        cout << "Successful operator >"<<endl;
    }else{
        cout << "Failed operator >"<<endl;
    }

    if(s1<s2) {
        cout << "Failed operator <"<<endl;
    }else{
        cout << "Successful operator <"<<endl;
    }

    if(s1==s2) {
        cout << "Failed operator =="<<endl;
    }else{
        cout << "Successful operator =="<<endl;
    }

    if(s1==s1) {
        cout << "Successful operator =="<<endl;
    }else{
        cout << "Failed operator =="<<endl;
    }

}

/*
// SONG TESTER //

   if (s1 < s2) { //Expected False
        cout << "Operator '<'  size compare Works" << endl;
    } else {
        cout << "'<' operator size compare didn't work" << endl;
    }

Song s6("Beatles", "Hey Jude2", 5);

Song s7("A", "Hey Jude", 5);

Song s8("A", "Hey Jude", 5);



if (s4 > s3) {  //Expected False
cout << "Operator greater than artist Works" << endl;
} else {
cout << "'>' operator artist didn't work" << endl;
}

if (s6 > s5) { //Expected False
cout << "Operator greater than title Works" << endl;
} else {
cout << "'>' operator title didn't work" << endl;
}

if (s2 > s) { //Expected False
cout << "Operator greater than size compare Works" << endl;
} else {
cout << "'>' operator size compare didn't work" << endl;
}

if (s8 > s7) { //Expected to print "didn't work"
cout << "Operator greater than didn't work" << endl;
} else {
cout << "'>' operator greater than works" << endl;
}

if (s3 < s4) {  //Expected False
cout << "Operator '<'  artist Works" << endl;
} else {
cout << "'>' operator artist didn't work" << endl;
}

if (s5 < s6) { //Expected False
cout << "Operator '<' title Works" << endl;
} else {
cout << "'>' operator title didn't work" << endl;
}

if (s < s2) { //Expected False
cout << "Operator '<'  size compare Works" << endl;
} else {
cout << "'<' operator size compare didn't work" << endl;
}

if (s7 < s8) { //Expected "didn't work"
cout << "Operator '<' didn't work" << endl;
} else {
cout << "Operator '<' works" << endl;
}

if (s8 == s7) { //Expected True
cout << "Operator '==' works" << endl;
} else {
cout << "Operator '==' incorrect" << endl;
}

if (s2 == s) { //Expected False
cout << "Operator '==' incorrect" << endl;
} else {
cout << "Operator '==' works" << endl;
}


Song s1("Beatles", "Hey Jude1", 4);
result = t.addSong(s1);
cout << "result = " << result << endl;

t.showSongList();

Song s2("Beatles", "Hey Jude2", 5);
result = t.addSong(s2);
cout << "result = " << result << endl;

if (s1 < s2) { //Expected False
    cout << "Operator '<'  size compare Works" << endl;
} else {
    cout << "'<' operator size compare didn't work" << endl;
}

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

t.shuffle();
cout << "SHUFFLED"<< endl;

t.showSongList();

t.sortSongList();
cout << "SORTED"<< endl;

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

t.clearMemory();
cout << "memory = " << t.getRemainingMemory() << endl;
t.showSongList();
*/



