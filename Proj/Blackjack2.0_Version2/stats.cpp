/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>

#include "stats.h"

using namespace std;
Stats::Stats()
{
    money = 500;
    win = 0;
    loss = 0;
}

int Stats::getMoney()
{
    return money;
}

void Stats::wins(int gambled)
{
    cout << "\nYou win!\n\n" << endl;
    money += gambled;
    win++;
}

void Stats::losses(int gambled)
{
    cout << "\nYou lose\n\n" << endl;
    money -= gambled;
    loss++;
}

void Stats::output()
{
    cout << fixed << setprecision(1) << showpoint;
    cout << "\nGame Over\n" << endl;
    cout << "Statistics for this game are:\n" << endl;
    cout << "Total wins = " << win << endl;
    cout << "Total losses = " << loss << endl;
    cout << "Total games = " << win + loss << endl;
    cout << "Percentage of games won = " << static_cast<float>(win) / 
            (win + loss) * 100 << "%" << endl;
    cout << "Percentage of games lost = " << static_cast<float>(loss) / 
            (win + loss) * 100 << "%" << endl;
    cout << "Final score: $" << money << endl;
}