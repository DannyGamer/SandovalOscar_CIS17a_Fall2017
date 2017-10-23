/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 2nd, 2017, 1:11 PM
 * Purpose:  Create a data structure that stores information about a movie.
 */

#include <string>

using namespace std;

#ifndef MVIEDAT_H
#define MVIEDAT_H

struct MvieDat
{
    string title;     //Title of the movie
    string director;  //Name of the director
    int yrRlsd;       //Year the movie was released
    int time;         //Running time of movie
};

#endif /* MVIEDAT_H */

