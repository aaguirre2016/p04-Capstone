#ifndef _SONG_H
#define _SONG_H_
#include <string>
#include <iostream>

using namespace std;

class Song
{
    private:
    string m_name; 
    double m_length;
    string m_genre;
    
    public: 
    void setname (string);
    void setlength (double);
    void setgenre (string);
    string getname();
    double  getlength ();
    string getgenre ();
};


#endif
