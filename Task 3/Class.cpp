/* Assignment: 1  
Author1: Israel Israeli, 
ID: 01234567 
Author2: Learsi Learsi,  
ID: 7654321 
 */ 


#include "Class.h"

using namespace std;


Class::Class(){
//A vector array is automatically initialized and there is no need to allocate memory but for each student no memory is allocated
    this->class_number = 0;
    this->layer_name = '-';
    Tutor_Teacher =NULL;
    this->Number_Pupil=0;
}

Class::Class(char layer_name ,int class_number ,vector<Pupil*>List_Pupil ,int Number_Pupil, Tutor* Tutor_Teacher=NULL){
    this->layer_name = layer_name;
    this->class_number = class_number;
    this->ListOfPupil = List_Pupil;
    this->Number_Pupil = List_Pupil.size();
    this->Tutor_Teacher = Tutor_Teacher;
}

 //copy constractor 
Class::Class(const Class &source){
    this->class_number=source.class_number;
    this->layer_name=source.layer_name;
    this->ListOfPupil=source.ListOfPupil;
    this->Number_Pupil = source.Number_Pupil;
    this->Tutor_Teacher = source.Tutor_Teacher;
}             

//Adding a student to the array
void Class::set_student(Pupil *Std){
    this->ListOfPupil.push_back(Std);  
    Number_Pupil++;

}


void Class::set_class_number(int Number /*number class*/){
    this->class_number = Number;
}
void Class::set_Tutor(Tutor* new_Tutor){
    this->Tutor_Teacher=new_Tutor;
}

void Class::set_layer_name(char name_layer){
    this->layer_name = name_layer;
}

vector<Pupil*> Class::get_vecstudent(){
    return this->ListOfPupil;
}

int Class::GetNumberStudent(){
    return ListOfPupil.size();
}

char Class::Get_layer_name(){
    return this->layer_name;
}

int Class::Get_class_number(){
    return this->class_number;
}

void Class::delptrTutor(){
    Tutor_Teacher=NULL;
}

//Checks if there is a teacher in the class
bool Class::is_Tutor(){
     if(Tutor_Teacher==NULL){
         return true;
     }
     return false;
    
}


//another option to Adding a student to the array
Class& Class::operator+=(Pupil *Std){
   for(int i=0;i<this->ListOfPupil.size();i++){
        if(ListOfPupil.at(i) == Std){
            cout<< "This student is already in the list"<<endl;
            return *this;}} 
    this->ListOfPupil.push_back(Std);
    Number_Pupil++;
    return *this;
}
 
   
Pupil& Class::find_student(int index){
    return *this->ListOfPupil.at(index);
}

Class::~Class()
{
    cout<< "the destractor-Layer"<<endl;
}

