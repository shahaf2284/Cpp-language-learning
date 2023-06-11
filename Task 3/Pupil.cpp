/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "Pupil.h"

Pupil::Pupil(){
    //A vector array is automatically given a dynamic array so there is no need to initialize it and allocate memory
    this->layer_name = '-';
    this->class_number = 0;
}
    
// constractor    
Pupil::Pupil(char* Name ,char* Last_name ,char ClassName,int ClassNumber,vector<double>Set_Student_g):Preson(Name, Last_name){
    this->layer_name = ClassName;
    this->class_number = ClassNumber;
    this->Pupil_grades = Set_Student_g;
    
}
    
//copy constractor
Pupil::Pupil(const Pupil &obj):Preson(obj.Get_name(), obj.Get_lastname()){
    this->layer_name = obj.layer_name;
    this->class_number = obj.class_number;
    Pupil_grades = obj.Pupil_grades;
} 

bool Pupil::operator==(const Pupil &obj){
    if((strcmp(Get_name(),obj.Get_name())==0)&&(strcmp(Get_lastname(),obj.Get_lastname())==0)){
        return true;}
    return false;
}


//Add another score to the score system
void Pupil::Set_Student_g(double Zion){
        Pupil_grades.push_back(Zion);
}

//The name of the class in which the student is studying
void Pupil::Set_NameGrade(char ClassName){
    this->layer_name=ClassName;
}

// set number class
void Pupil::Set_ClassNumber(int ClassNumber){
    this->class_number = ClassNumber;
}

//return the name of the class in which the student is studying
char Pupil::Get_NameGrade(){
    return layer_name;
}

//return the name of the class in which the student is studying
int Pupil::Get_ClassNumber(){
    return class_number;
}

//Returns the student's grade point average
double Pupil::GradeAverage(){
    double sum;
    for(double v: Pupil_grades)
        sum+=v;
    return ((sum/(this->Pupil_grades.size())>=0) && (sum/(this->Pupil_grades.size())<=100)) ? sum/(this->Pupil_grades.size()): 0.0;
}

//Check whether the student excels if he received an average above 85 and also does not have one grade below 65
bool Pupil::Excellent(){
    if(GradeAverage() > 85.0){      //If the average is above 85 then he is suspected as an outstanding student
        for(double v: Pupil_grades){  //A loop that checks if there is one score below 65
            if(v < 65.0){   
                return false;}}
        return true;}
    return false;

}

//Print student information
void Pupil::Print(){
    cout<<"Name: "<< Get_name() <<endl;
    cout<<"Last name: "<< Get_lastname() <<endl;
    cout<<"Student learns in class "<<layer_name<<"-"<<class_number<<endl;
    cout<<"Student grades: ";
    for(double grade_index: Pupil_grades)
        cout<< grade_index <<", ";
    cout<<"\nThe student's grade point average is: "<< GradeAverage()<<endl;
    if(Excellent()){
        cout<<"Well done, you are outstanding"<<endl;}
    else{
        cout<<"Sorry you do not excel, try to improve your grades in the following tests"<<endl<<endl;;}
}

Pupil::~Pupil(){
    cout<< "the destractor-Pupil"<<endl;
}

