/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#include "Tutor.h"

using namespace std;


Tutor::Tutor(){
    CLASS = NULL;
}

Tutor::Tutor(char* name, char* last_name,vector<string>list_courses,double seniority,Class* CLASS){
    Set_name(name);
    Set_lastname(last_name);
    Set_vectortopic(list_courses);
    Set_seniority(seniority);
    this->CLASS = CLASS;
}

//Copy constractor 
Tutor::Tutor(const Tutor &source):Teacher(source.Get_name(),source.Get_lastname(),source.get_veccourses(),source.Get_seniority()){
    this->CLASS = source.CLASS;
}

//Teacher salary plus plus salary supplement
double Tutor::Salery(){
    return Teacher::Salery()+1000;
}

bool Tutor::Excellent(){
    if(!CLASS)
        return false;
    int count=0;
    for(Pupil* p: CLASS->get_vecstudent()){
        if(p->Excellent()){
            count++;}
        }
    if(count>=(CLASS->GetNumberStudent()/2)){
        return true;}
    return false;
}


Class* Tutor::Get_Class(){
    return CLASS;
}


void Tutor::Print(){
    Teacher::Print();
    if(!CLASS){
        return;}
    cout<<"The class of the educator is: "<<CLASS->Get_class_number()<<" in layer-"<<CLASS->Get_layer_name()<<endl;
    cout<<"List of the educator's class students:"<<endl;
    for(Pupil* p: CLASS->get_vecstudent()){
        p->Print();}
    if(Excellent()){
       cout<<"The educator excels"<<endl;}
    else{
        cout<<"The educator does not excel"<<endl;}
}

Tutor::~Tutor(){
    cout<<"the destractor-Tutor"<<endl;
    delete CLASS;
}

