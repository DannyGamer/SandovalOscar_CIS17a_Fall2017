/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "player.h"
using namespace std;

// Set card in Player's hand
void Player::setCard(int index)
{
    hand.push_back(index);
}

int Player::getSum()
{
    int total = 0;
    
    // Define iterator object to step through vector
    vector<int>::iterator iter;
    
    for(iter = hand.begin(); iter < hand.end(); iter++)
    {
        total += *iter;
    }
    return total;
}

//bool Player::operator < (Player &right)
//{
//    bool status;
//    
//    cout << "Player Score: " << this->getSum() << endl;
//    cout << "Dealer Score: " << right.getSum() << endl;
//    if(this->getSum() < right.getSum())
//        status = true;
//    else
//        status = false;
//    
//    return status;
//}
//
//bool Player::operator > (Player &right)
//{
//    bool status;
//    
//    cout << "Player Score: " << this->getSum() << endl;
//    cout << "Dealer Score: " << right.getSum() << endl;
//    if(this->getSum() > right.getSum())
//        status = true;
//    else
//        status = false;
//    
//    return status;
//}

Player::~Player()
{
    hand.clear();
}