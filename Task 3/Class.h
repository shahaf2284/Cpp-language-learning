/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#ifndef CLASS_HPP
#define CLASS_HPP
//#include "Tutor.h"
//#include "Teacher.h"
//#include "Class.h"
#include "Pupil.h"
class Tutor;


using namespace std;

class Class
{
private:
    char layer_name;
    int class_number;
    vector<Pupil*>ListOfPupil{};
    int Number_Pupil;
    Tutor *Tutor_Teacher;
public:
    Class();
    Class(char layer_name ,int class_number ,vector<Pupil*>ListOfPupil ,int Number_Pupil, Tutor *Tutor_Teacher);
    Class(const Class &source);                              //copy constractor 
    void set_student(Pupil *Std);
    void set_class_number(int Number /*number class*/);
    void set_layer_name(char name_layer);
    char Get_layer_name();
    int Get_class_number();
    void delptrTutor();
    bool is_Tutor();
    vector<Pupil*> get_vecstudent();
    int GetNumberStudent();
    Class& operator+=(Pupil *Std);
    Pupil& find_student(int index);
    void set_Tutor(Tutor* new_Tutor);
    ~Class();

};

#endif // CLASS_HPP
