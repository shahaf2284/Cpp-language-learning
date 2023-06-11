/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#ifndef PUPIL_HPP
#define PUPIL_HPP

#include "Preson.h"


using namespace std;

class Pupil: virtual public Preson
{
private:
    vector<double>Pupil_grades{};              //All student grades by subject name and grade
    char layer_name;                           //The name of the class in which the student is studying
    int class_number;   
public:
    Pupil();  
    Pupil(char* Name ,char* Last_name ,char ClassName,int ClassNumber,vector<double>Set_Student_g);
    Pupil(const Pupil &source);                                               // copy constractor 
    bool operator==(const Pupil& rhs);
    void Set_Student_g(double Zion);
    void Set_NameGrade(char ClassName);
    void Set_ClassNumber(int ClassNumber);
    char Get_NameGrade();
    int Get_ClassNumber();
    double GradeAverage();               //Returns the student's grade point average
    bool Excellent();                    //Checks whether the student excels for an average higher than 85 and without a grade of 65
    void Print();                         //Print student information
    virtual~Pupil();

};

#endif // PUPIL_HPP
