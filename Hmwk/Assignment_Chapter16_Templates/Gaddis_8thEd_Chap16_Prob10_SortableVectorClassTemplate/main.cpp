/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 11:29 PM
 * Purpose: Create SortableVector class template that sorts vector in 
            ascending order
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "sortVec.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int SIZE = 10; //Number of elements
    int count;           //Loop counter
    int result;          //To hold search results

    cout << "This program will use a SimpleVector class template\n"
            "to store numbers and arrange them." << endl;
    cout << "Enter the amount of numbers you want to put in the vector: ";
    cin >> SIZE;
    //Create SearchableVector object
    SortVec<float> intTable(SIZE);

    //Store values in the objects.
    for (count = 0; count < SIZE; count++)
    {
        cout << "Enter value #" << count + 1 << ": ";
        cin >> intTable[count];
    }

    //Display the values in the object
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;

    //Sort the vector's elements in ascending order
    cout << "\nSorting elements in intTable.\n";
    intTable.sort();
    
    //Display the values in the object sorted in ascending order
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
        cout << intTable[count] << " ";
    cout << endl;
    
    //Exit stage right!
    return 0;
}