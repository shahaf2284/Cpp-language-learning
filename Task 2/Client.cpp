/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 

#include "Client.h"
#include "String.h"
#include <iostream>


using namespace std;

Client::Client(){      // defult costractor , initialization by none value     
    //   initialization (id and name all ready initialization by the constractor in class String)
    this->Gender = '-';       // no type Gender 
    this->Age = 0.0;
    this->Hobby = 0;
    this->List_h = new char*[50];     //Dynamic memory 200 byts of memory 
}
Client::Client(String id1, String name, char Typesex, double age, int number_h, char **list_h)
{
    this->Id = id1;                                 // initialization
    this->Customer_name=name;
    this->Gender = Typesex;
    this->Age = age;
    this->Hobby = number_h;
//    int lenhobby = strlen(*list_h);
    this->List_h= new char*[this->Hobby+1];       //Dynamic memory
    for(int i=0;i<this->Hobby;i++)        
        {
        List_h[i] = new char[strlen(list_h[i])+1];     //Dynamic memory
        for(int j=0;j<strlen(list_h[i]);j++)        
                {
                    List_h[i][j] = list_h[i][j];
                }
        }
}
Client::Client(const Client &source)    //copy constractor  
{ 
    Id = source.Id; 
    Customer_name = source.Customer_name; 
    Gender = source.Gender;                 // no type Gender 
    Age = source.Age;
    Hobby = source.Hobby;
    List_h = new char*[Hobby+1];               //Dynamic memory  
    for(int i=0;i<this->Hobby;i++)        
        {
        List_h[i] = new char[strlen(source.List_h[i])+1];     //Dynamic memory
        strcpy(List_h[i], source.List_h[i]);                             //initialization
             }
}  

void Client::operator=(Client &obj)
{
    this->Id = obj.Id;                      // copy all the object 
    this->Customer_name=obj.Customer_name;      
    this->Age = obj.Age;        
    this->Gender=obj.Gender;
    for(int i = 0;i < this->Hobby;i++)
            delete [] this->List_h[i];
    delete [] this->List_h;
    this->List_h= new char*[obj.Hobby];     //Dynamic memory
    if(obj.Hobby!=0)
    {   
        for(int i=0;i<obj.Hobby;i++)
        {
            this->List_h[i] = new char[strlen(obj.List_h[i])];     //Dynamic memory by location obj
            for(int j=0;j<=strlen(obj.List_h[i]);j++)
                this->List_h[i][j] = obj.List_h[i][j];
    }}
    else{
        this->List_h= new char*[10];     //Dynamic memory
        }
    this->Hobby = obj.Hobby;
}
bool Client::operator==(Client &obj)       //Comparison of objects and return bool value
{
    int result = obj.Age-this->Age;
    int flag1=0;
    int flag2=0;
    if(this->Gender != obj.Gender)                              //Checking their gender type
    {
        if(((result<=5) && (result>=0))||((result>=-5) && (result<=0)))      //Checking the age difference of a gap of 5 years
        {
           while(this->List_h[flag1])
            {
               while(obj.List_h[flag2])
                   {
                    if(strcmp(this->List_h[flag1], obj.List_h[flag2])==0)       //strcmp- compares two strings character by character
                        {
                        return true;
                        }
                    flag2++;
                   }
            flag2=0;
            flag1++;
            } 
        }
}
    return false;
}

String Client:: getname(){
    
    return this->Customer_name;
}
String Client::GetId(){
    return this->Id;
}

char Client::getGender(){
    return this->Gender;
}

double Client::getAge(){
    return this->Age;
}

int Client::getHobbies()
{
    return this->Hobby;
}

char** Client::getListOfHobbies()
{
    return this->List_h;
}  
Client::~Client()
{
//    cout << "Freeing memory Client" << endl;
    for(int i = 0;i < this->Hobby;i++)
        delete [] this->List_h[i];
    delete [] List_h;
    
}



