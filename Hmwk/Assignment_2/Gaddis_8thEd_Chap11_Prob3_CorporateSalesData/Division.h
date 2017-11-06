/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 6th, 2017, 1:23 PM
 * Purpose: Create a program that uses a structure to store data on a 
            company division.
 */

#include <string>

using namespace std;

#ifndef DIVISION_H
#define DIVISION_H

struct Division
{
    string name;   //Name of division
    float first;   //First-Quarter sales
    float second;  //Second-Quarter sales
    float third;   //Third-Quarter sales
    float fourth;  //Fourth-Quarter sales
    float total;   //Total Annual Sales
    float average; //Average Quarterly Sales
};

#endif /* DIVISION_H */

