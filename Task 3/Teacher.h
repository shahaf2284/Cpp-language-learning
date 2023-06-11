/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "Worker.h"

using namespace std;

class Teacher:virtual public Worker
{
private: 
    vector<string>list_topics{};
    int NumberOfTopics; 
public:
    Teacher();
    Teacher(vector<string>list_courses);
    Teacher(char* name, char* last_name,vector<string>list_courses,double seniority);
    Teacher(const Teacher &source);                              //copy constractor 
    void Set_topic(string topic);  
    void Set_vectortopic(vector<string>list_courses);  
    int get_NumberOfTopics()const;
    vector<string> get_veccourses()const;
    virtual double Salery();                    //Teacher's salary according to the calculation of several courses
    virtual bool Excellent();                   //Check if the teacher excels, if he teaches over 5 courses
    void PrintTopics();                         //A function that prints all of the teacher's teaching courses
    virtual void Print() override;                       //Printing all teacher information    
    virtual~Teacher();

};

#endif // TEACHER_HPP
