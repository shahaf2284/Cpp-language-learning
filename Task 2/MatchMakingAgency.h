/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 
#ifndef MATCHMAKINGAGENCY_HPP
#define MATCHMAKINGAGENCY_HPP

#include <vector>
#include "Client.h"
#include "String.h"
#include <iostream>
#include <string.h>

using namespace std;

class MatchMakingAgency
{
private:
    int Client_number;
    vector<Client>ListOfClients;
public:
    MatchMakingAgency();                                                 //defult constractor 
    MatchMakingAgency& operator=(MatchMakingAgency &obj);                //initialization the objects by comper another objrct
    Client& FindingCustomer(String &ID);                                 //Finding a customer by ID
    void FindMacth(String &ID);                                               //find match by reference in operator== in client 
    friend ostream& operator<<(ostream &out, const MatchMakingAgency &M);     //print operator all client
    MatchMakingAgency& operator+=(Client &obj);                               //add client
    MatchMakingAgency& operator-=(Client &client);                           //remove client
    ~MatchMakingAgency();

};

#endif // MATCHMAKINGAGENCY_HPP
