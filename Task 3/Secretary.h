/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#ifndef SECRETARY_HPP
#define SECRETARY_HPP

#include "Worker.h"

using namespace std;
//This department will describe a member of the school secretariat staff, 
//this staff member is an employee who receives a salary from the school

class Secretary: public Worker
{
private:
    int Number_kids;
public:
    Secretary();
    Secretary(char* Name,char* Last_Name,double seniority,int Number_kids);
    Secretary(const Secretary &obj);
    double Salery();                          
    bool Excellent();
    void Print();    
    virtual~Secretary();

};

#endif // SECRETARY_HPP
