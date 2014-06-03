//
//  Theater.h
//  MovieExam
//
//  Created by Drew Sears on 5/29/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//// I swear this program is my work and my work alone.


#ifndef MovieExam_Theater_h
#define MovieExam_Theater_h
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;
class Theater{
public:
    
    
    Movie movies[11];
    int movieCount;

    string name;//string of theater name
    string phone;//theater phone number
    int hour;//hour of movie
    
    void AddMovie(Movie& Movie);//function to add a movie
    
    
    double GetPopcornPrice(double price);//cannot change price of popcorn price
    double GetCokePrice(double price);//cannot change price of coke
    string GetMovieForHour(int hour);//returns movie hour
    int GetShowTimeForGenre(string genre);//returns time for comedy
    
    Theater(string name, string phone);//constructor for Theater

   
    
    
};




#endif
