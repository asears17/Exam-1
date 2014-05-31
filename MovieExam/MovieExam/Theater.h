//
//  Theater.h
//  MovieExam
//
//  Created by Drew Sears on 5/29/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef MovieExam_Theater_h
#define MovieExam_Theater_h
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;
class Theater{
public:
    
   static Theater garland(string name,int phone);//defines theater as garland
    string name;//string of theater name
    string phone;//theater phone number
    int hour;//hour of movie
    
    void AddMovie(Movie& Movie);//function to add a movie
    bool TheaterName(string name);//theater name
    
private:
    bool GetPopcornPrice(double price);//cannot change price of popcorn price
    bool GetCokePrice(double price);//cannot change price of coke
    
   
    
    
};



#endif
