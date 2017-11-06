/* 
 * File:   Cards.h
 * Author: Oscar Sandoval
 *
 * Created on November 4, 2017, 2:17 PM
 */

#ifndef CARDS_H
#define CARDS_H

#include <string>
using namespace std;

struct Cards
{
    //Array for each card name
    const string cards[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", 
                               "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

    //Array for value of each card
    short cardVal[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

    //Array for total number of each card value in deck
    short cardTot[13] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
};

#endif /* CARDS_H */

