Final Project
Alfredo Aguirre Dominguez


# Input/Output
[main.cpp lines 20-22, 51-57, 63, 67, 71, 75, 78, 97](/main.cpp#L20) 
> I used cout statements to print questions and cin statements to take in a user's input. Some of the 
> cout statements created lists to give the user a choice. 

## Control Flow and Iteration
[main.cpp lines 24, 49, 59, 83](/main.cpp#L24)
[main.cpp lines 33,100, 113](/main.cpp#L33)
> I used if, else if, and switch statements to guide the user through the program. The user's choice 
> would direct their attention to another activity. 



> For iteration, I used a while loop to create a playlist and add titles, lengths, and genres to 
> a list of songs. I also used a do-while loop to ask the user to create an album with song titles, 
> lengths, and the genres. 


### Data Structure
[main.cpp lines 13, 86, 95](/main.cpp#L13)
> I used a pass by reference function to alter a vector. The vector is holding the songs for the 
> album that the user creates in the 3rd option. 

#### Function
[main.cpp lines 13, 87, 95-113](/main.cpp#L13)
[song.cpp lines 7-30](/song.cpp#L7)
[song.h lines 16-21](/song.h#L16)

> The functions I used were majority member functions. They were defined in song.cpp and the prototypes 
> are in song.h. The functions are called in main.cpp to print out song titles, lengths, and genres.

##### File IO
[main.cpp lines 26-46](/main.cpp#L26)
> I used File Input and Output by creating an album.txt file that already holds a playlist, and adds
> "The song's title, length, and genre" to each song. To form a playlist. 

###### Class
[main.cpp lines 107-111](/main.cpp#L107)
[song.h lines 8-22](/song.h#L8)
> I implemented a class by creating it for a purpose of being able to pass a song title, length, and 
> genre from another file. 
