//
//  Movie.h
//  MovieExam
//
//  Created by Drew Sears on 5/30/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//

#ifndef MovieExam_Movie_h
#define MovieExam_Movie_h
#include <string>
using namespace std;
class Movie{
public:

    string title;
    string genre;
    int showTime;
    
    bool GetTitle(string title);
    bool GetGenre(string Genre);
    bool GetShowtime(int showTime);
    
private:
    
    int price;
    
    bool GetPrice(int price);
};



#endif
