//
//  Theater.cpp
//  MovieExam
//
//  Created by Drew Sears on 5/29/14.
//  Copyright (c) 2014 Drew Sears. All rights reserved.
//// I swear this program is my work and my work alone.


#include "Theater.h"




void Theater::AddMovie(Movie &Movie){
    movies[movieCount]= Movie;
    movieCount++;
        
}

double Theater::GetCokePrice(double price){
    return 3.00;
}

double Theater::GetPopcornPrice(double price){
    return 4.00;
}

string Theater::GetMovieForHour(int hour){
    return "";
}

int Theater::GetShowTimeForGenre(string genre){
    int retShowtime= -1;
    for (int i=0; i<movieCount; i++) {
        if (movies[i].GetGenre(genre))
            retShowtime=i;
        }
        
        return retShowtime;
    }


    Theater::Theater(string name, string phone){
    movieCount=0;
}

