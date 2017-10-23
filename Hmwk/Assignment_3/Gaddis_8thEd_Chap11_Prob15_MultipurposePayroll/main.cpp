/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 9th, 2017, 7:53 PM
 * Purpose: Create a program that calculates pay for either an hourly 
            paid worker or a salaried worker.
 */

//System Libraries
#include <iostream> //Input - Output Library

using namespace std; //Name-space under which system libraries exist

//User Libraries
#include "Hourly.h"
#include "Salary.h"
#include "Pay.h"

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    Pay worker;   //Define a union variable
    char choice;  //To choose the pay type
    float total;  //Total pay
    
    //Initialize variables
    
    //Input data
    cout << "This program will calculate the pay for either an hourly\n"
            "paid worker or a salaried worker." << endl;
    cout << "Type (h) to calculate pay for an hourly worker or (s) to\n"
            "calculate pay for a salaried worker." << endl;
    cin >> choice;
    
    //If chosen h, calculate pay for an hourly paid worker
    if(choice == 'h' || choice == 'H')
    {
        do
        {
            cout << "\nEnter the hours worked: ";
            cin >> worker.pType.hrsWrkd;
            if(worker.pType.hrsWrkd < 0 || worker.pType.hrsWrkd > 80)
            {
                cout << "Invalid input. Enter a number greater than 0 and "
                        "less than or equal to 80." << endl;
            }
        } while(worker.pType.hrsWrkd < 0 || worker.pType.hrsWrkd > 80);
        do
        {
            cout << "Enter the hourly rate: $";
            cin >> worker.pType.hrlyRt;
            if(worker.pType.hrlyRt < 0)
                cout << "Invalid input. Enter a number greater than 0." << endl;
        } while(worker.pType.hrlyRt < 0);
        
        //Multiply hours worked with hourly rate to get gross pay
        total = worker.pType.hrsWrkd * worker.pType.hrlyRt;
        
        cout << "The gross pay is: $" << total << endl;
    }
    
    //If chosen s, calculate pay for a salaried worker
    else if(choice == 's' || choice == 'S')
    {
        do
        {
            cout << "\nEnter the salary: $";
            cin >> worker.pType2.salary;
            if(worker.pType2.salary < 0)
                cout << "Invalid input. Enter a number greater than 0." << endl;
        } while(worker.pType2.salary < 0);
        do
        {
            cout << "Enter the bonus: $";
            cin >> worker.pType2.bonus;
            if(worker.pType2.bonus < 0)
                cout << "Invalid input. Enter a number greater than 0." << endl;
        } while(worker.pType2.bonus < 0);
        
        //Add bonus to the salary to get gross pay
        total = worker.pType2.salary + worker.pType2.bonus;
        
        cout << "The gross pay is: $" << total << endl;
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}