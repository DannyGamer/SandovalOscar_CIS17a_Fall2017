/* 
 * File:   player.h
 * Author: Oscar Sandoval
 *
 * Created on December 7, 2017, 8:14 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>       //Needed for vectors
using namespace std;

class Player
{
    private:
        vector<int> hand;    //Vector to hold the cards that the player will get
    public:
        ~Player();
        void setCard(int);
        int getSum();
        bool operator < (Player &);
        bool operator > (Player &);
};

#endif /* PLAYER_H */

