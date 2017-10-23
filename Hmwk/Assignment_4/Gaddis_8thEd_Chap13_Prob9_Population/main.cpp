/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 20th, 2017, 8:38 PM
 * Purpose: Create a program that calculates Birth Rate and Death Rate 
            for a population.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Popltn.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
   //Declare variables
    Popltn pop;  //Create Population object
    
    //Input data about population
    pop.input();
    
    //Display data about population
    pop.display();
    
    //Exit stage right!
    return 0;
}