/* 
 * File:   cards.h
 * Author: Oscar Sandoval
 * Created on December 7, 2017, 8:09 PM
 * Purpose: Cards class specification file
 */

#ifndef CARDS_H
#define CARDS_H

#include <string>     //Needed for string class
using namespace std;

class Cards
{
    private:
        // Name of each card available in deck
        string name[13] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
                            "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
        // Value that each card holds in the game of Blackjack
        int value[13] = { 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };
        // Total number of each card of each suit available in deck
        int total[13] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
        bool givOther;         // Flag to check if another card should be handed out
        int index;             // Index used to determine randomly generated card
        static int prevIndex;  // Static member variable to determine previous randomly generated card
    public:
        int givCard();   // Function that returns value of a card given a random index
        static int setpIndex(int); // Function that sets value of index to prevIndex
};

#endif /* CARDS_H */