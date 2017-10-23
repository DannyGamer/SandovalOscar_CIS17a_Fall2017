/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Personal Information class implementation
 */

#include <iostream>
#include <string>
#include <cstring>

#include "Info.h"

using namespace std;

//Input information for contact
void Info::input()
{
    cout << "Enter the contact's name: ";
    getline(cin, name);
    cout << "Enter the contact's address: ";
    getline(cin, address);
    do
    {
        cout << "Enter the contact's age: ";
        cin >> age;
        if(age < 1)
            cout << "Invalid input. Enter an integer greater than 0." << endl;
    } while(age < 1);
    cout << "Enter the contact's phone number: ";
    cin.ignore();
    getline(cin, phone);
}

//Display contact's information
void Info::display()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Age: " << age << endl;
    cout << "Phone Number: " << phone << endl;
}