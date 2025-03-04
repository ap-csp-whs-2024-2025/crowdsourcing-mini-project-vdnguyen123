/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

int main()
{
    // write your code here
    std::vector<std::string> song_names = {};
    std::vector<std::string> song_artist = {};
    std::vector<int> song_duration = {};

    std::string choice = "y"; // y or n to enter a new song
    while (choice != "n" && choice == "y")
    {
        std::cout << "\nEnter a song name (don't add spaces)\n";
        std::string name;
        std::cin >> name;
        song_names.push_back(name);
    
        std::cout << "\nEnter the artist of the song (no spaces)\n";
        std::string artist;
        std::cin >> artist;
        song_artist.push_back(artist);
    
        std::cout << "\nEnter the duration of the song (in seconds)\n";
        int duration;
        std::cin >> duration;
        song_duration.push_back(duration);
    
        std::cout << "\nDisplaying lists\n";
        display(song_names);
        display(song_artist);
        display(song_duration);

        std::cout << "\nWould you like to enter a new song (y/n)?\n";
        std::cin >> choice;
    }
   
    return 0;
}
