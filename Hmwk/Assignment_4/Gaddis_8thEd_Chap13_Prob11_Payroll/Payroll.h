/* 
 * Author: Oscar Sandoval
 * Date: October 20th, 2017
 * Purpose: PayRoll class specification
 */

#ifndef PAYROLL_H
#define PAYROLL_H

class Payroll
{
    private:
        float hrlyRte;  //Employee's hourly pay rate
        int hrsWrkd;    //Number of hours worked
        float totPay;   //Total pay for the week
    public:
        void input(int);
        void pay();
        void display(int);
};

#endif /* PAYROLL_H */