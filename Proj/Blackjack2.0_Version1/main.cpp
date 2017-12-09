/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 7th, 2017, 8:08 PM
 * Purpose: Blackjack Version 2.0
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "cards.h"
#include "game.h"
#include "player.h"
#include "stats.h"

//Global Constants

//Function Prototypes
void menu(char);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;   //Choose for option menu
    
    //Output menu
    menu();
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void menu(char choice)
{
    char choice;
    
    cout << "**********************************************\n"
            "*                Blackjack                   *\n"
            "**********************************************\n";
    cout << "Choose an option:" << endl;
    cout << "1) Play" << endl;
    cout << "2) Help" << endl;
    cout << "3) Cash Out (Exit Game)" << endl;
    
    switch(choice)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            cout << "Game Over" << endl;
            exit(0);
            break;
    }
}