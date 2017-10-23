/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: Scores class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

class Scores
{
    private:
        float test1;  //Score for test #1
        float test2;  //Score for test #2
        float test3;  //Score for test #3
    public:
        Scores();
        void input();
        float average(float, float, float);
        void display();
};

#endif /* PAYROLL_H */