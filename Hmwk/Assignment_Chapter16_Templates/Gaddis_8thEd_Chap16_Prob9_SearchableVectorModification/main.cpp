/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on December 3rd, 2017, 10:39 PM
 * Purpose: Modify SearchableVector class template to use a binary search.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "searchVec.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE = 10; //Number of elements
    int count;           //Loop counter
    int result;          //To hold search results
    int position = -1;

    //Create SearchableVector object
    SearchVec<int> intTable(SIZE);

    //Store values in the objects.
    for (count = 0; count < SIZE; count++)
    {
        intTable[count] = (count * 2);
    }

    //Display the values in the objects
    cout << "These values are in intTable:\n";
    for (count = 0; count < SIZE; count++)
    cout << intTable[count] << " ";
    cout << endl;

    // Search for the value 6 in intTable.
    cout << "\nSearching for 6 in intTable using binary search.\n";
    result = intTable.findItem(6);
    if (result == position)
        cout << "6 was not found in intTable.\n";
    else
        cout << "6 was found at subscript " << result << endl;
    
    //Exit stage right!
    return 0;
}