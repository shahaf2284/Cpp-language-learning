/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "Preson.h"

using namespace std; 

// Defult constructor  
Preson::Preson(){
    name = new char;             //Dynamic memory
    last_name = new char;        //Dynamic memory
}

// Constructor 
Preson::Preson(char* Name, char* Last_name){ 
    name = new char[strlen(Name)+1];                    //Dynamic memory
    last_name = new char[strlen(Last_name)+1];          //Dynamic memory
    strcpy(name, Name);
    strcpy(last_name, Last_name);
}

//copy constractor
Preson::Preson(const Preson &source){
    this->name = new char[strlen(source.name) + 1];               //Dynamic memory
    this->last_name = new char[strlen(source.name) + 1];          //Dynamic memory
    strcpy(name, source.name);                                    //initialization 
    strcpy(last_name, source.last_name);                                //initialization 
} 

Preson& Preson::operator=(const Preson &obj){
    name = new char[strlen(obj.name) + 1];
    last_name = new char[strlen(obj.last_name) + 1];
    strcpy(name,obj.name);                             //Copies the string
    strcpy(last_name,obj.last_name);                    //Copies the string
    return *this;
}

//Initialization the name 
void Preson::Set_name(char* Name){
    this->name = new char[strlen(Name) + 1];               //Dynamic memory
    strcpy(name,Name);                               //Copies the string
}

//Initialization the last name 
void Preson::Set_lastname(char* Last_name){
    last_name = new char[strlen(Last_name) + 1];
    strcpy(last_name,Last_name);                                 //Copies the string
}

//Returning the name value
char* Preson::Get_name()const{
    return this->name;}

//Returning the last name value
char* Preson::Get_lastname()const{
    return this->last_name;
}

Preson::~Preson()
{
    cout<< "the destractor-Preson"<<endl;
    delete [] name;
    delete [] last_name;
}

