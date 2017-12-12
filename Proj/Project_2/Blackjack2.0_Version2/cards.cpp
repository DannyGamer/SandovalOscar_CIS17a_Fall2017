/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <ctime>    //Time for rand
#include <chrono>
#include <thread>

#include "cards.h"
#include "player.h"

using namespace std;

int Cards::givCard()
{
    int index;
    static int prevIndex;
    bool givOther;
    
    // NOTE: We wait 1000 milliseconds because po/fast CPUs
    // give the same number inside random.
    this_thread::sleep_for(chrono::milliseconds(1000));
    
    // Set random seed generator
    srand(static_cast<unsigned int>(time(0)));
    
    do
    {
        givOther = false;
        
        // Create random number for index variable
        index = rand() % 13;
        
        if(index == prevIndex)
            givOther = true;
        prevIndex = index;
    } while(total[index] < 0 || givOther); // Loop while a card is given when there are no more available
    
    // Remove card from card total in deck
    total[index]--;
        
    cout << "Card name: " << name[index] << endl;
    cout << "Card Value: " << value[index] << endl;
    cout << "Number left: " << total[index] << endl;
    
    // Return value of random card
    return value[index];
}