/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 20th, 2017, 5:16 PM
 * Purpose: Create a program that displays a date input by the user in 3 
            different forms.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Date.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Date date;
    
    cout << "This program will display a date input by the user in 3\n"
            "different forms." << endl;
    
    //Input data
    date.input();
    date.display();
    
        
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}