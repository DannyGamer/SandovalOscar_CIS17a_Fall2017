/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 2nd, 2017, 1:11 PM
 * Purpose:  Create a data structure that stores information about a movie.
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "MvieDat.h"

//Global Constants

//Function Prototypes
void display(MvieDat);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    MvieDat movie1;  //Declare first movie
    MvieDat movie2;  //Declare second movie
    
    cout << "This program will display information about 2 movies that is\n"
            "input by the user." << endl;
    
    // Get information for the first movie
    cout << "Enter the following information for the first movie" << endl;
    cout << "Enter the movie's name: ";
    getline(cin, movie1.title);

    cout << "Enter the director's name: ";
    getline(cin, movie1.director);
    
    cout << "Enter the year the movie was released: ";
    cin >> movie1.yrRlsd;
    
    cout << "Enter the running time of the movie (in minutes): ";
    cin >> movie1.time;
    
    // Get information for the second movie
    cout << "\nEnter the following information for the second movie:" << endl;
    cout << "Enter the movie's name: ";
    cin.ignore();
    getline(cin, movie2.title);

    cout << "Enter the director's name: ";
    getline(cin, movie2.director);
    
    cout << "Enter the year the movie was released: ";
    cin >> movie2.yrRlsd;
    
    cout << "Enter the running time of the movie (in minutes): ";
    cin >> movie2.time;
    
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
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yrRlsd << endl;
    cout << "Running Time: " << movie.time << " minutes" << endl;
}