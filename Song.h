//
//  Song.h
//  
//
//  Created by David Fernandez on 10/28/18.
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
    Song(string _artist, string _title, int _size);
    
    bool operator >(Song const &rhs);
    bool operator <(Song const &rhs);
    bool operator ==(Song const &rhs);
};


#endif /* Song_h */
