/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 
#ifndef MENU_HPP
#define MENU_HPP
#include "MatchMakingAgency.h"
#include <vector>
#include "String.h"

class Menu
{
private:
    MatchMakingAgency MatchingMakingAgency;
public:
    Menu();
    void BringUpMenu();          //  Displays the menu
    ~Menu();
};

#endif // MENU_HPP
