//
//  Song.h
//  
//
//  Created by David Fernandez and Adrian Melo on 10/28/18.
//

#ifndef Song_h
#define Song_h
#include <string>

using namespace std;

class Song
{
private:
    string artist;
    string title;
    int size;
    
public:
    Song();

    Song(string _artist, string _title, int _size);

    string getArtist() const{
        return artist;
    }

    void setArtist(string n) {
        artist = n;
    }

    string getTitle() const{
        return title;
    }

    void setTitle(string m){
        title = m;
    }

    int getSize() const;

    void setSize(int p){
        size = p;
    }
    
    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);
};


#endif /* Song_h */
