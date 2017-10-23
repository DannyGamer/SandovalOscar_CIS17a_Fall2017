/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 17th, 2017, 6:16 PM
 * Purpose: Predict size of a population of organisms
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Format output

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float startP; //Starting number of organisms
    float pIncrse; //Average daily population increase (as a percentage)
    int days; //Number of days organisms will multiply
    
    //Initialize variables
    
    //Input data
    cout << "This program will predict the size of a population of organisms.\n"
         << endl;
    cout << "Enter the starting number of organisms: ";
    do
    {
        cin >> startP;
        if(startP < 2)
            cout << "Invalid input. Please input a number grater than or equal "
                    "to 2" << endl;
    } while(startP < 2);
    cout << "Enter the organisms' average daily population increase "
            "(as a percentage): %";
    do
    {
        cin >> pIncrse;
        if(pIncrse < 0)
            cout << "Invalid input. Please input a positive number." << endl;
    } while(pIncrse < 0);
    cout << "Enter the number of days the organisms will multiply: ";
    do
    {
        cin >> days;
        if(days < 1)
            cout << "Invalid input. Please input a number greater than or equal "
                    "to 1." << endl;
    } while(days < 1);
    
    //Map inputs to outputs or process the data
    cout << fixed << setprecision(2);
    cout << "\n\nDay   |  Population" << endl;
    cout << "-----------------------" << endl;
    for(int i = 1; i < days + 1; i++)
    {
        cout << " " << i << setw(13) << startP << endl;
        startP = (startP * (pIncrse / 100)) + startP;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}