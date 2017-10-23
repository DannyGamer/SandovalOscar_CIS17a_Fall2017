/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Circle class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

class Circle
{
    private:
        float radius;       //Radius of circle
        float pi = 3.14159; //Constant for pi
    public:
        Circle();            //Default Construct
        Circle(float);       //Construct that acccepts a float argument
        void setRad(float);  //Function to set radius value
        float getRad();      //Function to return radius of circle
        float getArea();     //Function to return area of circle
        float getDmtr();     //Function to return diameter of circle
        float getCirc();     //Function to return circumference of circle
};

#endif /* PAYROLL_H */