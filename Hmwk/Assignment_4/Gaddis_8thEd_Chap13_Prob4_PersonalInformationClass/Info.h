/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Personal Information class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

#include <string>
using namespace std;

class Info
{
    private:
        string name;     //Name
        string address;  //Street Address
        int age;         //Age
        string phone;    //Phone number
    public:
        void input();   //Input data for each contact
        void display(); //Display data about each contact
};

#endif /* PAYROLL_H */