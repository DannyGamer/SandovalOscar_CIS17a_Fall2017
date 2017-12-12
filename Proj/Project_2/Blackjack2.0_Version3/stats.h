/* 
 * File:   stats.h
 * Author: Oscar Sandoval
 * Created on December 7, 2017, 8:23 PM
 * Purpose: Stats class specification file
 */

#ifndef STATS_H
#define STATS_H

//template <class T>
class Stats
{
    private:
        float money;    //Money gambled and earned
        int win;    //Number of games won
        int loss;   //Number of games lost
    public:
        Stats();
        float getMoney();
        void wins(int);
        void losses(int);
        void output();
};

#endif /* STATS_H */

