/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose:  class implementation
 */

#include "Circle.h"

using namespace std;

//Construct 
Circle::Circle()
{
   radius = 0.0; //Set radius to 0
}

//Construct with float argument
Circle::Circle(float r)
{
    radius = r; //Set radius to value of r
}

//Set radius of circle
void Circle::setRad(float r)
{
    radius = r; //Set radius to value of r
}

//Retrieve radius of circle
float Circle::getRad()
{
    return radius;
}

//Calculate area of circle and return it
float Circle::getArea()
{
    return pi * radius * radius;
}

//Calculate diameter of circle and return it
float Circle::getDmtr()
{
    return radius * 2;
}

//Calculate circumference of circle and return it
float Circle::getCirc()
{
    return 2 * pi * radius;
}