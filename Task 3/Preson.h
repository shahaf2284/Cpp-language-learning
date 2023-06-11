/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#ifndef PRESON_HPP
#define PRESON_HPP

#include "string.h"
#include <vector> 
#include <iostream> 

class Preson
{
private:
    char *name;
    char *last_name;
public:
    Preson();
    Preson(char* Name, char* Last_name);
    Preson(const Preson &source); 
    Preson& operator=(const Preson &obj);  
    void Set_lastname(char* Last_name);
    void Set_name(char* Name);
    char* Get_name()const;
    char* Get_lastname()const;
    virtual void Print()=0;
    virtual bool Excellent()=0;
    virtual~Preson();

};

#endif // PRESON_HPP
