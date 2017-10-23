/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Population class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

class Popltn
{
    private:
        int pop;     //Population
        int births;  //Number of births in population
        int deaths;  //Number of deaths in population
    public:
        Popltn();
        void input();
        float birthRt();
        float deathRt();
        void display();
};

#endif /* PAYROLL_H */