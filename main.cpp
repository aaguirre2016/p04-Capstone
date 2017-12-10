#include <fstream>
#include <string>
#include "song.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
double length;
string genre;
Song s;
string input;


length = s.getlength();
genre = s.getgenre();

    ofstream alfredoFile;
    cout << length << endl;
    alfredoFile<<length << endl;
    cout<< s.getname();  

alfredoFile.open(" file.txt ");
alfredoFile<< "Writing to output file\n";
alfredoFile.close();

vector<Song> record;
do 
{
Song song;
Song.setname(string);
Song.setlength(double);
Song.setgenre(string); 

record.push_back(Song);
} 

while (input != "quit");
ofstream alfredoFile; // ...
alfredoFile.open("record.txt");

//mix up--v
for (int i=0; i < record.size(); i++)
    string genre;
    record[i].getgenre();
    record[i].getlength();

    cout<<record[i].getname();
    cout<<genre;
    cout<<length;
    alfredoFile<<genre;
    alfredoFile<<length;
}
alfredoFile.close();
//mix up--^
}
