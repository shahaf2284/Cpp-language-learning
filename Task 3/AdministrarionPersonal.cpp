/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "AdministrarionPersonal.h"

using namespace std;


//defult constractor 
AdministrarionPersonal::AdministrarionPersonal(){
    this->office_number="None";
}

AdministrarionPersonal::AdministrarionPersonal(string office_number){
        this->office_number = office_number; 
}                           

//copy constractor
AdministrarionPersonal::AdministrarionPersonal(const AdministrarionPersonal &obj)
    :Worker(obj.Get_name(), obj.Get_lastname(),obj.Get_seniority(),obj.Get_Manager_seniority()){
    this->office_number = obj.office_number;
}

//constractor
AdministrarionPersonal::AdministrarionPersonal(char* name,char* last_name, string office_number,double seniority,double Manager_seniority)
:Worker(name,last_name,seniority,Manager_seniority)
{
    this->office_number = office_number; 
}

//set the office number 
void AdministrarionPersonal::Set_office_number(string Set_office_number){
    this->office_number = office_number;
}

//get the office number / return the number office - string
string AdministrarionPersonal::Get_office_number()const{
    return office_number;
}


AdministrarionPersonal::~AdministrarionPersonal(){
    cout<<"the destractor-AdministrarionPersonal"<<endl;

}

