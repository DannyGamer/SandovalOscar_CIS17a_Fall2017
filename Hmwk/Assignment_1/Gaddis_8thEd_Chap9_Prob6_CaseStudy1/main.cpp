/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 27th, 2017, 6:14 PM
 * Purpose: Modify Program 9-19 so it can be used with any set of donations.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void arrSort(float *, int);
void showAry(float *, int);
void showPtr(float *, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int size;   //Number of donations 
    
    cout << "This program will sort any amount of donations in ascending order."
         << endl;
    cout << "Enter the number of donations you want to sort: ";
    cin >> size;
    
    float *donations = new float[size];
    float *arrPtr = new float[size];
    
    for (int index = 0; index < size; index++)
    {
        cout << "Enter donation #" << index + 1 << ": $";
        cin >> *(donations + index);
    }   

    //Make each element point to an element in the donations array. 
    for (int count = 0; count < size; count++) 
        arrPtr[count] = donations[count];

    //Sort the elements of the array of pointers. 
    arrSort(arrPtr, size); 

    // Display the donations using the array of pointers.
    cout << "\nThe donations, sorted in ascending order are: " << endl; 
    showPtr(arrPtr, size);

    // Display the donations in their original order. 
    cout << "\nThe donations, in their original order are: \n"; 
    showAry(donations, size); 
    
    //Delete dynamically allocated memory
    delete [] donations;
    delete [] arrPtr;
    donations = 0;
    arrPtr = 0;
    
    //Exit stage right!
    return 0;
}

void arrSort(float *arr, int size) 
{ 
    int start;
    int min; 
    float minElem = 0; 

    for (start = 0; start < (size - 1); start++) 
    { 
        min = start; 
        minElem = *(arr + start); 
        for(int index = start + 1; index < size; index++) 
        { 
            if (*(arr + index) < minElem) 
            { 
                minElem = *(arr + index); 
                min = index; 
            } 
        } 
        *(arr + min) = *(arr + start); 
        *(arr + start) = minElem; 
    } 
} 

void showAry(float *arr, int size) 
{ 
    for (int count = 0; count < size; count++)
        cout << "$" << *(arr + count) << ", "; 
    cout << endl; 
} 

void showPtr(float *arr, int size)
{ 
    for (int count = 0; count < size; count++) 
        cout << "$" << *(arr + count) << ", "; 
    cout << endl; 
}    