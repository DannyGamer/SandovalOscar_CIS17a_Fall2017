/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 6th, 2017, 1:23 PM
 * Purpose: Create a program that uses a structure to store data on a 
            company division.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Division.h"

//Global Constants

//Function Prototypes
void input(Division &);
void calc(Division &);
void display(Division &);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Division east;
    Division west;
    Division north;
    Division south;
    
    //Initialize variables
    east.name = "East";
    west.name = "West";
    north.name = "North";
    south.name = "South";
    
    cout << "This program will calculate total and average sales for four "
            "different divisions of a company based on information input "
            "by the user." << endl;
    
    //Input sales data for each division
    input(east);
    input(west);
    input(north);
    input(south);
    
    //Calculate the total and average sales for each Division
    calc(east);
    calc(west);
    calc(north);
    calc(south);
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    display(east);
    display(west);
    display(north);
    display(south);
    
    //Exit stage right!
    return 0;
}

void input(Division &a)
{
    cout << "\n\nEnter the following information for the " << a.name 
         << " Division:" << endl;
    do
    {
        cout << "Enter the First-Quarter Sales: $";
        cin >> a.first;
        if(a.first < 0)
            cout << "Invalid input. Please input a number higher than 0.\n";
    } while(a.first < 0);
    do
    {
        cout << "Enter the Second-Quarter Sales: $";
        cin >> a.second;
        if(a.second < 0)
            cout << "Invalid input. Please input a number higher than 0.\n";
    } while(a.second < 0);
    do
    {
        cout << "Enter the Third-Quarter Sales: $";
        cin >> a.third;
        if(a.third < 0)
            cout << "Invalid input. Please input a number higher than 0.\n";
    } while(a.third < 0);
    do
    {
        cout << "Enter the Fourth-Quarter Sales: $";
        cin >> a.fourth;
        if(a.fourth < 0)
            cout << "Invalid input. Please input a number higher than 0.\n";
    } while(a.fourth < 0);
}

void calc(Division &a)
{
    a.total = a.first + a.second + a.third + a.fourth;
    a.average = a.total / 4.0f;
}

void display(Division &a)
{
    cout << endl << a.name << " Division" << endl;
    cout << "Total Sales: $" << a.total << endl;
    cout << "Average Sales: $" << a.average << endl;
}