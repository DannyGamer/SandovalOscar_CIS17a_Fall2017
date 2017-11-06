/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on September 27th, 2017, 8:17 PM
 * Purpose: Modify Program 9-19 so the arrptr array is sorted in descending order.
 */

//System Libraries
#include <iostream> //Input - Output Library
#include <iomanip>  //Formatting Output

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
    int size;   // Number of donations 
    
    cout << "This program will sort any amount of donations in descending order." << endl;
    cout << "Enter the number of donations you want to sort: ";
    cin >> size;
    
    float *donations = new float[size];
    float *arrPtr = new float[size];
    
    for (int index = 0; index < size; index++)
    {
        cout << "Enter donation " << index + 1 << ": $";
        cin >> *(donations + index);
    }   

    //Make each element point to an element in the donations array. 
    for (int count = 0; count < size; count++) 
        arrPtr[count] = donations[count];

    //Sort the elements of the array of pointers. 
    arrSort(arrPtr, size); 

    // Display the donations using the array of pointers.
    cout << "\nThe donations, sorted in descending order are: " << endl; 
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
    int max; 
    float maxElem = 0; 

    for (start = 0; start < (size - 1); start++) 
    { 
        max = start; 
        maxElem = *(arr + start); 
        for(int index = start + 1; index < size; index++) 
        { 
            if (*(arr + index) > maxElem) 
            { 
                maxElem = *(arr + index); 
                max = index; 
            } 
        } 
        *(arr + max) = *(arr + start); 
        *(arr + start) = maxElem; 
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