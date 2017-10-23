/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 11th, 2017, 2:34 PM
 * Purpose:  Write a program that finds a string's length
 */

//System Libraries Here
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
int count(char *);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int SIZE = 100;
    char sentence[SIZE];
    char *ptr;
    int number;
    
    //Input or initialize values Here
    cout << "This program will find the number of characters input by the "
            "user." << endl;
    cout << "Input a sentence or a word:" << endl;
    cin.getline(sentence, SIZE);
    ptr = sentence;
    number = count(ptr);
    
    //Process/Calculations Here
    
    //Output the number of characters in C-String
    cout << "\nThe number of characters that you input is " << number << endl;

    //Exit
    return 0;
}

int count(char *a)
{
    int temp;   //To hold the number of characters input by the user
    temp = strlen(a);
    return temp;
}