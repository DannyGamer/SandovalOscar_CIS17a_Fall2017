/* 
 * File:   Stats.h
 * Author: Oscar Sandoval
 *
 * Created on November 4, 2017, 1:50 PM
 */

#ifndef STATS_H
#define STATS_H

#include <string>
using namespace std;

struct Stats
{
    char choice; //Input number to choose option menu
    string input;    //Choice input by user to gamble
    int win = 0; //Counts the wins of the player
    int loss = 0; //Counts the losses of the player
    bool askAgn = false; //Loops again as long as boolean is false
    int money = 500; //Money given to player to gamble
    int gambled;     //Money player wants to gamble
};

#endif /* STATS_H */

