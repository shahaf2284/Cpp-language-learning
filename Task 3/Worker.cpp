/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "Worker.h"

using namespace std;

double Worker::basis = 25.0;     

Worker::Worker(){
    seniority = 0.0;
    Manager_seniority=0.0; 
}

//Worker::Worker(char* name,char* last_name, double seniority):Preson(name, last_name){
//    this->seniority = seniority;
//}


Worker::Worker(char* name,char* last_name, double seniority,double Manager_seniority) :Preson(name,last_name){
    Set_name(name);
    Set_lastname(last_name);
    this->seniority = seniority;
    this->Manager_seniority = Manager_seniority;
}

// copy constractor 
Worker::Worker(const Worker &obj):Preson(obj.Get_name(),obj.Get_lastname()){
    seniority = obj.seniority;
}


void Worker::Set_seniority(double seniority){
    this->seniority = seniority;
}


void Worker::Set_Manager_seniority(double Manager_seniority){
    this->Manager_seniority = Manager_seniority;
}


double Worker::Get_seniority()const{
    return seniority;
}


double Worker::Get_Manager_seniority()const{
    return Manager_seniority;
}

//printing the worker info 
void Worker::Print(){
    cout<<"Name: "<< Get_name() <<endl;
    cout<<"Last name: "<< Get_lastname() <<endl;  
    cout<<"salery:"<<Salery()<<endl;
    cout<<"Years of seniority of the Worker: "<< seniority <<endl;
    if(Manager_seniority!=0){
        cout<<"Years of Manager seniority: "<< Manager_seniority << endl;}  
    }


Worker::~Worker(){
    cout<<"the destractor-Worker"<<endl;
}

