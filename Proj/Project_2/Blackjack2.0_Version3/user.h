/* 
 * File:   user.h
 * Author: Oscar Sandoval
 *
 * Created on December 11, 2017, 12:59 PM
 */

#ifndef USER_H
#define USER_H

#include <string>
#include "player.h"
using namespace std;

class User : public Player
{
    private:
        char *name; // Pointer to a char array
    public:
        User();
        ~User();
        void setName(string a); // Function to set name to member variable
        char *getName()
        { return name; }
};

#endif /* USER_H */

