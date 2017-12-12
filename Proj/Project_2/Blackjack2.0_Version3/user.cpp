/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
#include <iostream>
#include "user.h"
using namespace std;

User::User()
{
    // Initialize char array to 0
    name = 0;
}

void User::setName(string a)
{
    // Dynamically create a char array with size of string parameter
    name = new char[a.length() + 1];
    
    // Copy contents of string parameter to char array
    for(int i = 0; i < a.length(); i++)
        name[i] = a[i];
}

User::~User()
{
    // Deallocate memory of dynamically created char array
    delete [] name;
}