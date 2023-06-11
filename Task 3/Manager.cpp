/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#include "Manager.h"
#include "Worker.h"
using namespace std;

Manager* Manager::manager = NULL;

Manager::Manager(){
}

//builder if the principal is not a teacher
Manager::Manager(char* name, char* last_name,double Manager_seniority, string office_number):AdministrarionPersonal(office_number){
//    Set_office_number(office_number);
    Set_name(name);
    Set_lastname(last_name);
    Set_Manager_seniority(Manager_seniority);
}

// builder if the principal is a teacher as well
Manager::Manager(char* name, char* last_name, double seniority,double Manager_seniority, string office_number, vector<string>list_cour){
        Set_office_number(office_number);
        Set_name(name);
        Set_lastname(last_name);
        Set_seniority(seniority);
        Set_Manager_seniority(Manager_seniority);
        if(list_cour.size()>0){
            Teacher(list_cour);
            }
}

//copy constractor
Manager::Manager(const Manager &obj):Worker(obj.Get_name(),obj.Get_lastname(),obj.Get_seniority(),obj.Get_Manager_seniority()),
                Teacher(obj.get_veccourses()),AdministrarionPersonal(obj.Get_office_number()){  
}
  
//static function      
Manager* Manager::Create_manager(){
//    manager = new Manager(char* name, char* last_name, double seniority,double Manager_seniority, string office_number, vector<string>list_cour);
    return manager;
}
 

Manager& Manager::operator=(const Manager &obj){
    Set_name(obj.Get_name());
    Set_lastname(obj.Get_lastname());
    Set_seniority(obj.Get_seniority());
    Set_Manager_seniority(obj.Get_Manager_seniority());
    Set_vectortopic(obj.get_veccourses());
    Set_office_number(obj.Get_office_number());
    return *this;
} 

 
double Manager::Salery(){
    if(!get_NumberOfTopics())                        //if the principal is not a teacher
        return basis*2+Get_Manager_seniority()*500;
        
    // A manager who is also a teacher from your class like that,What a teacher receives plus an Manager salary    
    double SaleryResult = Teacher::Salery()+basis*2+Get_Manager_seniority()*500;
//    double SaleryResult = basis*(1+get_NumberOfTopics()/10)+Get_seniority()*300+basis*2+Get_Manager_seniority()*500;
    return SaleryResult;
}


bool Manager::Excellent(){
    return (Get_Manager_seniority()>3)? true:false;
}


void Manager::Print(){
    if(get_NumberOfTopics() !=0){
        Teacher::Print();}
    else{
        Worker::Print();}
    cout<<"Office number: "<< Get_office_number() <<endl<<endl;
 
}


Manager::~Manager(){
    cout<< "the destractor-Manager"<<endl;
    delete manager;
}
