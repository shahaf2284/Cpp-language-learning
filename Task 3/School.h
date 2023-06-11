/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
#ifndef SCHOOL_HPP
#define SCHOOL_HPP

#include "Layer.h"
#include "VecAnalyser.h"
#include "VecAnalyser.cpp"
#include "Tutor.h"
#include "Secretary.h"
#include "Manager.h"
#include "Pupil.h"



#define Number_layers_in_school 6        //Number of layers in the school
#define Number_class_in_layers 3                    //The number of classes in the layers


class School
{
private:
//    Layer school_layers[Number_layers_in_school];           //layers in the school
    vector<Layer*>school_layers{};              
    int number_layers;                          //Number of layers in the school maximum 6 layers                
    vector<Pupil*>student;
    vector<Worker*>worker;
    static School *school;
    School();
    //Related to the menu
    //Pupil menu stat:
    bool checkString(string str);                      //Check if the name entered is in the range of the letters according to the ASCII 
    bool checkStringNumber(const string &num); //Check if the number entered is in the range of the letters according to the ASCII 
    string Set_name();
    string Set_lastname();
    int  Set_Class_Number();
    char Set_Layer();
    double seniority();
    double ManagerSeniority();
    vector<string>Set_Courses();
    string Set_Number_Office();
    int Set_numofkids();
    bool checkNumberClass(const string &num);
    bool checkGrade(string grade);
    
public:
    void menu();
    static School Creat_school();
    virtual ~School();

};

#endif // SCHOOL_HPP
