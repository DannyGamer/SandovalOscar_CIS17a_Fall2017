/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 11th, 2017, 12:00 PM
 * Purpose: Blackjack Version 2.0 Version 3
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "cards.h"
#include "player.h"
#include "stats.h"
#include "user.h"

//Global Constants

//Function Prototypes
void menu(Stats);
void rules();

//Execution begins here
int main(int argc, char** argv) {
    //Instantiate object
    Stats stats;
    
    //Declare variables
    char choice;  // Choice for option menu
    char choice2; // Choice to hit or stand
    int gambled;  // Money to gamble in game
    bool deal;    // Flag to check when dealer should stand
    bool lost;    // Flag to check if player went over 21
    bool won;     // Flag to check if dealer went over 21
    string name;
    
    // Enter name
    cout << "Enter your name: ";
    getline(cin, name);
        
    // Start the game
    do
    {
        // Initialize bool statements
        deal = false;
        lost = false;
        won = false;
        
        // Dynamically create objects to later be deleted
        User *player = new User;
        Player *dealer = new Player;
        Cards *cards = new Cards;
        
        // Set name
        player->setName(name);
        
        // Output the menu
        menu(stats);
        
        //Enter choice for menu option
        cin >> choice;
        
        // If chosen to play, but player has no money left, game ends
        if(choice == '1' && stats.getMoney() <= 0)
        {
            cout << "\nInsufficient funds. You cannot place the minimum bet." << endl;
            choice = '3';
        }

        switch(choice)
        {
            case '1':
                // Input amount of money to gamble
                cout << "How much do you want to gamble?\n$";
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
                    else if(tolower(choice2) == 's')
                        cout << "\nYou have ended your turn," << endl;
                    else
                    {
                        cout << "\nInvalid option." << endl;
                        choice2 = 'h'; // Set choice to h so it will loop and ask again
                    }
                    // If player's score is greater than 21, break out of loop and declare a loss
                    if(player->getSum() > 21)
                    {
                        lost = true; // Set boolean to true and display a loss
                        break;
                    }
                } while(tolower(choice2) == 'h'); // Loop as long as player chooses to hit
                
                // If player's hand is over 21, player loses, match ends
                if(lost)
                    stats.losses(gambled);
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
                            cout << "\nDealer stands." << endl << endl;
                        else if(dealer->getSum() > 21)
                        {
                            cout << "\nDealer loses." << endl << endl;
                            won = true;
                        }
                    } while(deal);

                    // If player's score is less than dealer's, player loses
                    if(player->getSum() < dealer->getSum() && !won)
                        stats.losses(gambled);
                    // If player's score is greater than dealer's, player wins
                    else if(player->getSum() > dealer->getSum() && !won)
                        stats.wins(gambled);
                    // If player's score is equal to dealer's, player wins
                    else
                        stats.wins(gambled);
                }
                
                // Delete objects so that the game can reset with everything back to normal
                delete player;
                delete dealer;
                delete cards;
                break;
            case '2':
                break;
            case '3':
                stats.output(); // Output game statistics
                exit(0); // Exit the game
                break;
            default:
                cout << "\nBad input." << endl << endl;
                break;
        }
    } while(choice != '3');
    
    //Exit stage right!
    return 0;
}

// Display menu
void menu(Stats stats)
{
        cout << "**********************************************\n"
                "*                Blackjack                   *\n"
                "**********************************************\n";
        cout << "You have $" << stats.getMoney() << endl << endl;
        cout << "1) Play" << endl;
        cout << "2) Help" << endl;
        cout << "3) Cash Out (Exit Game)" << endl;
        cout << "Choose an option: ";
}

void rules()
{
}