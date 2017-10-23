/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Population class implementation
 */

#include <iostream>
#include <iomanip>

#include "Popltn.h"

using namespace std;

Popltn::Popltn()
{
    cout << "This program will calculate Birth Rate and Death Rate\n"
            "for a population during a period of time." << endl;
}

//Input data into object
void Popltn::input()
{
    //Get the population number
    do
    {
        cout << "Enter the population number: ";
        cin >> pop;
        if(pop < 1)
            cout << "Invalid input. Please enter an integer greater than 0.\n";
    } while(pop < 1);
    
    //Get the number of births in population
    do
    {
        cout << "Enter the number of births in the population: ";
        cin >> births;
        if(births < 0)
            cout << "Invalid input. Please enter an integer greater than\n"
                    "or equal to 0.";
    } while(births < 0);
    
    //Get the number of deaths in population
    do
    {
        cout << "Enter the number of deaths in the population: ";
        cin >> deaths;
        if(deaths < 0)
            cout << "Invalid input. Please enter an integer greater than\n"
                    "or equal to 0.";
    } while(deaths < 0);
}

//Calculate birth rate of population
float Popltn::birthRt()
{
    return static_cast<float>(births) / static_cast<float>(pop);
}

//Calculate death rate of population
float Popltn::deathRt()
{
    return static_cast<float>(deaths) / static_cast<float>(pop);
}

void Popltn::display()
{
    cout << "\n\nHere is the information about the population based on the\n"
            "data that you entered:\n" << endl;
    cout << "Population: " << pop << endl;
    cout << "Births: " << births << endl;
    cout << "Deaths: " << deaths << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Birth Rate: " << birthRt() << endl;
    cout << "Death Rate: " << deathRt() << endl;
}