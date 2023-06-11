/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 
 
#include "Teacher.h"

using namespace std;


Teacher::Teacher()
{
    NumberOfTopics = 0; 
}
Teacher::Teacher(vector<string>list_courses){
    this->list_topics = list_courses;
    this->NumberOfTopics = list_courses.size();
}

Teacher::Teacher(char* name, char* last_name,vector<string>list_courses,double seniority)
    :Worker(name,last_name,seniority, 0){
    NumberOfTopics = list_courses.size();
    list_topics = list_courses;
}

//copy constractor 
Teacher::Teacher(const Teacher &source):Worker(source.Get_name(), source.Get_lastname(),source.Get_seniority()){
    this->NumberOfTopics = source.NumberOfTopics;
    this->list_topics = source.list_topics;
}
//Initialization of the study subjects in the system
void Teacher::Set_topic(string topic){
    this->list_topics.push_back(topic);
    NumberOfTopics = list_topics.size();
}

void Teacher::Set_vectortopic(vector<string>list_courses){
    this->list_topics = list_courses;
}  

// return the number courses 
int Teacher::get_NumberOfTopics()const{
    return list_topics.size();
}

// return the vector - courses (string) 
vector<string> Teacher::get_veccourses()const{
    return list_topics;
}

//Calculation of the teacher's salary
double Teacher::Salery(){
    return basis*(1+NumberOfTopics/10)+Get_seniority()*300;
}

//Check if the teacher excels, if he teaches over 5 courses
bool Teacher::Excellent(){
    return (NumberOfTopics>=5) ?  true:false;
}

//A function that prints all of the teacher's teaching courses
void Teacher::PrintTopics(){
    cout<<"Learning courses: ";
    for(string topic: list_topics)
        cout << topic <<", ";
    cout<<endl;
}

//Printing all teacher information 
void Teacher::Print(){
    Worker::Print();                                             // mwthod from Worker (virtual function)
    cout <<"The number of courses that the teacher teaches: "<< list_topics.size() << endl; 
    PrintTopics();
    if(Excellent()){
            cout << "The teacher is excellent"<<endl;}
    else{
        cout<<"The teacher is not excellent"<<endl;}
}   
Teacher::~Teacher(){
        cout<<"the destractor-Teacher"<<endl;
}

