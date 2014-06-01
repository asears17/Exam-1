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
    
    
    
    string name;//string of theater name
    string phone;//theater phone number
    int hour;//hour of movie
    
    void AddMovie(Movie& Movie);//function to add a movie
    
    
    bool GetPopcornPrice(double price);//cannot change price of popcorn price
    bool GetCokePrice(double price);//cannot change price of coke
    bool GetMovieForHour(int hour);
    bool GetShowTimeForGenre(int showTime);
    
    Theater(string name, string phone);//constructor for Theater

        
   
    
    
};




#endif
