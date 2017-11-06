/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 4th, 2017, 2:31 PM
 * Purpose:  Create a data structure that stores information about a movie.
 */

#include <string>

using namespace std;

#ifndef MVIEDAT_H
#define MVIEDAT_H

//Structures
struct MvieDat
{
    string title;     //Title of the movie
    string director;  //Name of the director
    int yrRlsd;       //Year the movie was released
    int time;         //Running time of movie
    float cost;      //Movie's production costs
    float revenue;    //Movie's first year revenues
};

#endif /* MVIEDAT_H */

