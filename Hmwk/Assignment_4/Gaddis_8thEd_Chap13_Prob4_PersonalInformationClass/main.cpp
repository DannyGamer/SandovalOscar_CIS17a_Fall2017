/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 20th, 2017, 9:22 PM
 * Purpose: Create a program that displays contact information for 3 
            people input by the user.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Info.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   //Declare Objects
    Info contact1;  //Create Personal Information object for first contact
    Info contact2;  //Create Personal Information object for second contact
    Info contact3;  //Create Personal Information object for third contact
    
    cout << "This program will display contact information for 3 people\n"
            "input by the user." << endl;
    
    //Input data for each contact
    cout << "\nContact #1" << endl;
    contact1.input();
    cout << "\nContact #2" << endl;
    contact2.input();
    cout << "\nContact #3" << endl;
    contact3.input();
    
    //Display data for each contact
    cout << "\n\nHere is the information that you input for the 3 contacts.\n";
    cout << "\nContact #1" << endl;
    contact1.display();
    cout << "\nContact #2" << endl;
    contact2.display();
    cout << "\nContact #3" << endl;
    contact3.display();
    
    //Exit stage right!
    return 0;
}