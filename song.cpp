#include "song.h"
#include <string>
#include <iostream>

using namespace std;

void Song:: setname (string name)
    {
    m_name = name; 
    }
void Song:: setlength (double)
    {
    m_length = length;
    }
void Song:: setgenre (string)
    {
    m_genre = genre;
    }
string Song:: getname()
    {
    return m_name;
    }
double Song:: getlength ()
    {
    return m_length;
    }
string Song:: getgenre ()
    {
    return m_genre;
    }

