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
#include "player.h"
#include "stats.h"

//Global Constants

//Function Prototypes
void menu(Stats);

//Execution begins here
int main(int argc, char** argv) {
    //Instantiate objects
    Stats stats;
    
    //Declare variables
    char choice;  // Choice for option menu
    char choice2; // Choice to hit or stand
    int gambled;  // Money to gamble in game
    bool deal;    // Flag to check when dealer should stand
    bool lost;    // Flag to check if player went over 21
    bool won;
    
    //Input data
    do
    {
        deal = false;
        lost = false;
        won = true;
        menu(stats);
        
        Player *player = new Player;
        Player *dealer = new Player;
        Cards *cards = new Cards;
        
        //Enter choice for menu option
        cin >> choice;
        
        if(choice == '1' && stats.getMoney() <= 0)
        {
            cout << "Insufficient funds. You cannot place the minimum bet." << endl;
            choice = '3';
        }

        switch(choice)
        {
            case '1':
                // Input amount of money to gamble
                cout << "How much do you want to gamble?" << endl;
                cin >> gambled;
                
                cout << "\nGame Start" << endl;
                cout << "\nPlayer's Turn" << endl;
                
                // Deal two cards to Player
                cout << "\n\nYour two cards are:" << endl;
                player->setCard(cards->givCard());
                player->setCard(cards->givCard());
                
                // Get total value of Player's hand
                cout << "\nTotal value: " << player->getSum() << endl;
                
                // Ask player to hit or stand, loop if hit, else continue
                do
                {
                    cout << "Would you like to hit(h) or stand(s)?" << endl;
                    cin >> choice2;
                    if(tolower(choice2) == 'h')
                    {
                        player->setCard(cards->givCard());
                        cout << "\nTotal value: " << player->getSum() << endl;
                    }
                    else
                        cout << "\nYou have ended your turn," << endl;
                    if(player->getSum() > 21)
                    {
                        lost = true;
                        break;
                    }
                } while(tolower(choice2) == 'h');
                
                // If player's hand is over 21, player loses, match ends
                if(lost)
                {
                    stats.losses(gambled);
                }
                // If player's
                else
                {
                    //Deal 2 cards to dealer
                    cout << "\nDealer's Turn" << endl;
                    cout << "\nDealer's cards are:" << endl;
                    dealer->setCard(cards->givCard());
                    dealer->setCard(cards->givCard());
                    cout << "\nTotal value: " << dealer->getSum() << endl;

                    do
                    {
                        deal = false;
                        if(dealer->getSum() < 17)
                        {
                            cout << "\nDealer hits." << endl;
                            dealer->setCard(cards->givCard());
                            cout << "\nTotal value: " << dealer->getSum() << endl;
                            deal = true;
                        }
                        else if(dealer->getSum() >= 17 && dealer->getSum() <= 21)
                        {
                            cout << "\nDealer stands." << endl << endl;
                        }
                        else if(dealer->getSum() > 21)
                        {
                            cout << "\nDealer loses." << endl << endl;
                            won = false;
                        }
                    } while(deal);

                    // If player's score is less than dealer's, player loses
                    if(player->getSum() < dealer->getSum() && won)
                    {
                        stats.losses(gambled);
                    }
                    // If player's score is greater than dealer's, player wins
                    else if(player->getSum() > dealer->getSum() && won)
                    {
                        stats.wins(gambled);
                    }
                    // If player's score is equal to dealer's, player wins
                    else
                    {
                        stats.wins(gambled);
                    }
                }
                delete player;
                delete dealer;
                delete cards;
                break;
            case '2':
                break;
            case '3':
                stats.output();
                exit(0);
                break;
            default:
                cout << "\nBad input." << endl << endl;
                break;
        }
    } while(choice != '3');
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void menu(Stats stats)
{
        
        //Display menu
        cout << "**********************************************\n"
                "*                Blackjack                   *\n"
                "**********************************************\n";
        cout << "You have $" << stats.getMoney() << endl;
        cout << "1) Play" << endl;
        cout << "2) Help" << endl;
        cout << "3) Cash Out (Exit Game)" << endl;
        cout << "Choose an option: ";
}