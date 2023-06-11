/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#ifndef TUTOR_HPP
#define TUTOR_HPP


#include "Teacher.h"
#include "Class.h"
#include "Pupil.h"



using namespace std;

class Tutor: public Teacher     
{
private:
    Class *CLASS;
public:
    Tutor();                                                                          //defult constractor 
//    Tutor(char* name, char* last_name,vector<string>list_courses,double seniority);   //constractor
    Tutor(char* name, char* last_name,vector<string>list_courses,double seniority,Class* CLASS);
    Tutor(const Tutor &source);                              //copy constractor 
    double Salery();                         //Teacher's salary according to the calculation of several courses +1000 by being a Tutor
    Class* Get_Class();
    bool Excellent(); 
    void Print();
    virtual~Tutor();

};

#endif // TUTOR_HPP