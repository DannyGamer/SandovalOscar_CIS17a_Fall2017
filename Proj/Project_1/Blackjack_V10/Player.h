/* 
 * File:   Player.h
 * Author: Oscar Sandoval
 * Created on November 2, 2017, 11:47 PM
 * Purpose: Player structure specification
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

struct Player
{
    int score;     //Total score of player based on his hand's total value
    int index = 0; //Initialize to 0 each time program loops
};

#endif /* PLAYER_H */

