/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#include "Secretary.h"

using namespace std;
Secretary::Secretary(){
    this->Number_kids = 0;
}

// copy constractor 
Secretary::Secretary(const Secretary &obj):Worker(obj.Get_name(),obj.Get_lastname(),obj.Get_seniority()){
    this->Number_kids = obj.Number_kids;
}

Secretary::Secretary(char* Name,char* Last_Name,double seniority,int Number_kids):Worker(Name,Last_Name,seniority){
    this->Number_kids = Number_kids;
}

double Secretary::Salery(){
    return basis+Number_kids*200;
}

bool Secretary::Excellent(){
    bool flag = ((Get_seniority()>10) ? true:false);
    return flag;
}

void Secretary::Print(){
    Worker::Print();
    cout<<"The number of children you have attending this school "<<Number_kids<<endl;
    cout<<"The salery is: "<<Salery()<<endl;
} 
   
Secretary::~Secretary(){
    cout<<"the destractor-Secretary"<<endl;
}

