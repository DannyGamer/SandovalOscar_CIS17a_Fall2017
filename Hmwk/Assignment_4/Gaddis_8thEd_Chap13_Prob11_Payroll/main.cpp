/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 20th, 2017, 2:44 PM
 * Purpose: Create a program with a PayRoll class that calculates gross pay 
            for 7 employees.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Payroll.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    const int SIZE = 7;
    Payroll employ[SIZE];
    
    cout << "This program will calculate the gross pay for 7 employees based\n"
            "on information input by the user." << endl;
    
    //Input data, calculate, and display gross pay for each employee
    for(int count = 0; count < SIZE; count++)
    {
        employ[count].input(count);    //Input data
        employ[count].pay();           //Calculate gross pay
    }
    
    //Map inputs to outputs or process the data
    
    cout << "\n\nHere is the gross pay for each of the employees:\n" << endl;
    //Output the transformed data
    for(int count = 0; count < SIZE; count++)
        employ[count].display(count);  //Display gross pay
    
    //Exit stage right!
    return 0;
}