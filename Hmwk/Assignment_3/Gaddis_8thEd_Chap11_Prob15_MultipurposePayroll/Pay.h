/* 
 * File:   main.cpp
 * Author: Oscar Sandoval
 * Created on October 9th, 2017, 7:53 PM
 * Purpose: Create a program that calculates pay for either an hourly 
            paid worker or a salaried worker.
 */

#include "Hourly.h"
#include "Salary.h"

#ifndef PAY_H
#define PAY_H

union Pay
{
    Hourly pType;    //Hourly pay structure
    Salary pType2;   //Salary pay structure
};

#endif /* PAY_H */

