/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 4th, 2017, 2:31 PM
 * Purpose:  Create a data structure that stores information about a movie.
 */

//System Libraries Here
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries Here
#include "MvieDat.h"

//Global Constants

//Function Prototypes
void display(MvieDat);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    MvieDat movie1;  //Declare first movie
    MvieDat movie2;  //Declare second movie
    
    cout << "This program will display information about 2 movies that is\n"
            "input by the user." << endl;
    
    // Get information for the first movie
    cout << "Enter the following information for the first movie:" << endl;
    cout << "Enter the movie's title: ";
    getline(cin, movie1.title);

    cout << "Enter the director's name: ";
    getline(cin, movie1.director);
    
    cout << "Enter the year the movie was released: ";
    cin >> movie1.yrRlsd;
    
    cout << "Enter the running time of the movie (in minutes): ";
    cin >> movie1.time;
    
    cout << "Enter the movie's production costs (in dollars): $";
    cin >> movie1.cost;
    
    cout << "Enter the movie's first-year revenues (in dollars): $";
    cin >> movie1.revenue;
    
    // Get information for the second movie
    cout << "\nEnter the following information for the second movie:" << endl;
    cout << "Enter the movie's title: ";
    cin.ignore();
    getline(cin, movie2.title);

    cout << "Enter the director's name: ";
    getline(cin, movie2.director);
    
    cout << "Enter the year the movie was released: ";
    cin >> movie2.yrRlsd;
    
    cout << "Enter the running time of the movie (in minutes): ";
    cin >> movie2.time;
    
    cout << "Enter the movie's production costs (in dollars): $";
    cin >> movie2.cost;
    
    cout << "Enter the movie's first-year revenuesc(in dollars: $";
    cin >> movie2.revenue;
    
    //Input or initialize values Here
    
    //Output the movies' information
    cout << "\n\nThe first movie's information is:" << endl;
    display(movie1);
    cout << "\nThe second movie's information is:" << endl;
    display(movie2);

    //Exit stage right!
    return 0;
}

void display(MvieDat movie)
{
    float temp = 0;  //Revenue made by movie during first year
    temp = movie.revenue - movie.cost;
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yrRlsd << endl;
    cout << "Running Time: " << movie.time << " minutes" << endl;
    
    //If temp is greater than 0, profit was made, else, there was a loss
    if(temp > 0)
        cout << "First year's profit: $" << temp << endl;
    else
    {
        temp = temp * (-1);
        cout << "First year's loss: $" << temp << endl;
    }
}