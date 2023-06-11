/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#ifndef ADMINISTRARIONPERSONAL_HPP
#define ADMINISTRARIONPERSONAL_HPP
#include "string.h"
#include "Worker.h"
#include <iostream>

using namespace std;

class AdministrarionPersonal:virtual public  Worker 
{
private:
    string office_number;
public: 
    AdministrarionPersonal();                             //defalt constractor 
    AdministrarionPersonal(string office_number);        //constractor        
//    AdministrarionPersonal(string office_number,DOBEL SENURITY);        //constractor        
    AdministrarionPersonal(char* name,char* last_name, string office_number,double seniority,double Manager_seniority);     //constractor  
    AdministrarionPersonal(const AdministrarionPersonal &obj);         //copy constractor 
    void Set_office_number(string Set_office_number);
    string Get_office_number()const;
    virtual double Salery()=0;                             //Pure virtual
    virtual bool Excellent()=0;                            //Pure virtual
    virtual void Print()=0;                                //Pure virtual
    ~AdministrarionPersonal();

};

#endif // ADMINISTRARIONPERSONAL_HPP
