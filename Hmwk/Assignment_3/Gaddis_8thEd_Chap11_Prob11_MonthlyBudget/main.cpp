/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 9th, 2017, 2:22 PM
 * Purpose:  Create a program that reports budget spent in a month.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here
#include "Budget.h"

//Global Constants Only

//Function Prototypes Here
void input(Budget &);
void display(Budget, Budget);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    Budget fixed;
    Budget month;
    
    //Input or initialize values Here
    input(month);
    
    //Process/Calculations Here
    display(fixed, month);
    
    //Output Located Here

    //Exit
    return 0;
}

void input(Budget &month)
{
    cout << "Enter the following information for the budget you have spent\n"
            "this month on each of the following categories" << endl;
    do
    {
        cout << "Housing: $";
        cin >> month.housing;
        if(month.housing < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.housing < 0);
    do
    {
        cout << "Utilities: $";
        cin >> month.uts;
        if(month.uts < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.uts < 0);
    do
    {
        cout << "Household Expenses: $";
        cin >> month.expense;
        if(month.expense < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.expense < 0);
    do
    {
        cout << "Transportation: $";
        cin >> month.trans;
        if(month.trans < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.trans < 0);
    do
    {
        cout << "Food: $";
        cin >> month.food;
        if(month.food < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.food < 0);
    do
    {
        cout << "Medical: $";
        cin >> month.medic;
        if(month.medic < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.medic < 0);
    do
    {
        cout << "Insurance: $";
        cin >> month.insrnce;
        if(month.insrnce < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.insrnce < 0);
    do
    {
        cout << "Entertainment: $";
        cin >> month.ent;
        if(month.ent < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.ent < 0);
    do
    {
        cout << "Clothing: $";
        cin >> month.cloth;
        if(month.cloth < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.cloth < 0);
    do
    {
        cout << "Miscellaneous: $";
        cin >> month.misc;
        if(month.misc < 0)
            cout << "Invalid input. Enter a number greater than or equal to 0\n";
    } while(month.misc < 0);
}

void display(Budget fixed, Budget month)
{
    int total;    //Total fixed monthly budget
    float total2; //Total monthly budget spent by user
    
    fixed.housing = 500;
    fixed.uts = 150;
    fixed.expense = 65;
    fixed.trans = 50;
    fixed.food = 250;
    fixed.medic = 30;
    fixed.insrnce = 100;
    fixed.ent = 150;
    fixed.cloth = 75;
    fixed.misc = 50;
    
    total = fixed.housing + fixed.uts + fixed.expense + fixed.trans + 
            fixed.food + fixed.medic + fixed.insrnce + fixed.ent + 
            fixed.cloth + fixed.misc;
    
    total2 = month.housing + month.uts + month.expense + month.trans + 
            month.food + month.medic + month.insrnce + month.ent + 
            month.cloth + month.misc;
    
    //Compare each individual member
    cout << "\n\nHere is a report indicating the amount spent over or\n"
            "under each category in the budget. A negative number will\n"
            "indicate money spent over the fixed budget, while a positive\n"
            "number will indicate money spent under the fixed budget." << endl;
    cout << "Housing: $" << fixed.housing - month.housing << endl;
    cout << "Utilities: $" << fixed.uts - month.uts << endl;
    cout << "Household Expenses: $" << fixed.expense - month.expense << endl;
    cout << "Transportation: $" << fixed.trans - month.trans << endl;
    cout << "Food: $" << fixed.food - month.food << endl;
    cout << "Medical: $" << fixed.medic - month.medic << endl;
    cout << "Insurance: $" << fixed.insrnce - month.insrnce << endl;
    cout << "Entertainment: $" << fixed.ent - month.ent << endl;
    cout << "Clothing: $" << fixed.cloth - month.cloth << endl;
    cout << "Miscellaneous: $" << fixed.misc - month.misc << endl;
    cout << "Total Monthly Budget: $" << total - total2 << endl;
}