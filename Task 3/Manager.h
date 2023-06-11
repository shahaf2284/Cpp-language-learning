/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#ifndef MANAGER_HPP
#define MANAGER_HPP

#include "AdministrarionPersonal.h"
#include "Teacher.h"


class Manager:public AdministrarionPersonal ,public Teacher
{
private:
    static Manager* manager;
public:
    Manager();
    Manager(char* name, char* last_name,double Manager_seniority, string office_number);
    Manager(char* name,char* last_name, double seniority,double Manager_seniority, string office_number,vector<string>list_courses);
    Manager(const Manager &source);  
    Manager& operator=(const Manager &obj);  
    static Manager* Create_manager();
    double Salery();
    bool Excellent();
    void Print();
    virtual~Manager();

};

#endif // MANAGER_HPP
