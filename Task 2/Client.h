/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 
#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "String.h"
#include <iostream>
#include <string.h>

class Client
{

private:
//    friend class MatchMakingAgency;
    String Id;              
    String Customer_name;
    char Gender;                        //('M' for male and 'F' for fmale
    double Age;                         //Customer age
    int Hobby;                          // The number of hobbies of the customer
    char **List_h;                      // List of hobbies

public: 
    friend class MatchMakingAgency;
    Client();
    Client(String id1 ,String name ,char Typesex  ,double age ,int number_h, char **list_h);
    Client(const Client &source);       //copy constractor  
    void operator=(Client &obj);        //initialization the objects by comper another objrct
    bool operator==(Client &obj);       //Comparison of 3 objects:Gender,Age,atlist one hobby thsame. and return bool value
    char valueCustomer();
    String getname();
    String GetId();
    char getGender();
    double getAge();
    int getHobbies();
    char** getListOfHobbies();
    
    ~Client();
};

#endif // CLIENT_HPP
