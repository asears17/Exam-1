//
//  Movie.h
//  MovieExam
//
//  Created by Drew Sears on 5/30/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//// I swear this program is my work and my work alone.


#ifndef MovieExam_Movie_h
#define MovieExam_Movie_h
#include <iostream>
#include <string>
using namespace std;
class Movie{
public:

    
    
    string movieTitle;//defines movieTitle
    string title;
    string genre;//defines genre
    int showTime;//defines show time
    
    bool GetTitle(string title);//gets title of movie
    bool GetGenre(string genre);//gets genre of movie
    bool GetShowtime(int showTime);//gets showtime
    
    Movie(string name, string genre, int showtime);//initializes in main.cpp all the movies
    
private:
    
    int price;//price wont change
    
    bool GetPrice(double price);//get the private price of the movie
};



#endif
