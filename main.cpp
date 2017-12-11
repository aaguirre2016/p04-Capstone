#include <fstream>
#include <string>
#include "song.h"
#include <vector>
#include <iostream>

using namespace std;

    string songtitle;
    double songlength;
    string songgenre;
    
void songinput (int &count, vector<Song> &record);


int main()
{
int choice1;

    cout << "Do you want to make a playlist (1), listen to music (2), or make an album (3)?" << endl;
    cout << "Please type 1, 2, or 3 for your choice." << endl;
    cin >> choice1;

    if(choice1 == 1)
    {
            ifstream fin;
            fin.open("songs.txt");


            ofstream fout;
            fout.open("album.txt");

            while (getline(fin, songtitle))
            {
                    fin >> songlength;
                    fin.ignore();
                    getline (fin, songgenre);
                    fout << "The song's title is: " << songtitle << endl;
                    fout << "The song's length is: " << songlength << " minutes. " << endl;
                    fout << "The song's genre is: " << songgenre << endl;
                    fout << endl;
                    fin.ignore();
            }
            
            fin.close();
            fout.close(); 
                    cout << "Playlist written to album.txt " << endl; 
    }
     else if(choice1 == 2)
    {
            char choice2;   
            cout << "What mood are you in?" << endl;
            cout << "(A) Chill " << endl;
            cout << "(B) Loving " << endl;
            cout << "(C) Heartbroken " << endl;
            cout << "(D) Motivated " << endl;
            cin >> choice2;

        switch (choice2)
        {
             case 'a':
             case 'A':
                cout << "Feeling chill? Try listening to George Michael's Careless Whisper, Adele's Rolling in the Deep, or Ed Sheeran's Perfect Duet (ft. Beyonce). " << endl;
                break;
             case 'b':       
             case 'B':       
                cout << "Feeling loving? Check out Whitney Houston's I Will Always Love You, Taylor Swift's Love Story, or Bruno Mars' Just The Way You Are. " << endl;
                break;
             case 'c':       
             case 'C':           
                cout << " Feeling heartbroken? I ususlly listen to Adele's Someone Like You, Bruno Mars' When I Was Your Man, or Justin Timberlake's Cry Me a River. " << endl;
                break;
             case 'd':       
             case 'D':               
                cout << " Feeling Motivated? Alright! Try these songs: Sia's The Greatest, Marshmellow's Silence (ft. Khalid), or Imagine Dragons' Warriors" << endl;
                break;            
             default:
                cout << "Please choose a valid option. " << endl;
                break;
        }
    }

      else if (choice1 == 3)
      {
        int count = 0;
        vector<Song> record;
        songinput(count, record);
            
            cout << "Vector length is " << record.size() << endl;
      }
}



void songinput (int &count, vector<Song> &record)
{
    cout << "To make 3 songs, please list a song title, song length, and song genre for each. " << endl;
    cin.ignore();
    
   do
   {
        getline(cin, songtitle);
        cin >> songlength;
        cin.ignore();
        getline(cin, songgenre);

        Song s;
        s.setname(songtitle);
        s.setlength(songlength);
        s.setgenre(songgenre);
        record.push_back(s); 
        count++;
   }while(count < 3);
}







