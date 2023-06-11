/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
#ifndef WORKER_HPP
#define WORKER_HPP

#include "Preson.h"

class Worker:virtual public Preson
{
private:
    double seniority; 
    double Manager_seniority;
public:
    Worker();
    static double basis; 
//    Worker(char* name,char* last_name, double seniority);    
    Worker(char* name,char* last_name, double seniority,double Manager_seniority=0.0);
    Worker(const Worker &obj);                        //copy constractor 
//    Worker& operator=(const Worker &obj);
    void Set_seniority(double seniority);
    void Set_Manager_seniority(double Manager_seniority);
    double Get_seniority()const;
    double Get_Manager_seniority()const;
    virtual double Salery()=0;                         //Pure virtual
    virtual void Print() override;    
    virtual bool Excellent()=0;                         //Pure virtual
    static const double getbasis(){return basis;}   //Static method only static can use here 
    virtual~Worker();
};

#endif // WORKER_HPP
