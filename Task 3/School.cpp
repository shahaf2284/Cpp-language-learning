/* Assignment: 3  
Author1: shahaf zohar, 
ID: 205978000 
Author2: shaked basa,  
ID: 206310781
 */ 

#include "School.h"

using namespace std;


School* School:: school= NULL;

//constractor private method
School::School(){
    for(int i=0;i<Number_layers_in_school;i++){
        char Name = i + 'a';
        Layer* New_Layer = new Layer();
        school_layers.push_back(New_Layer);
        school_layers.at(i)->Set_Name_Layer(Name);
        for(int k = 0; k < Number_class_in_layers; k++){
            school_layers.at(i)->Getclass(k)->set_class_number(k+1);         
            school_layers.at(i)->Getclass(k)->set_layer_name(Name);}
        }
}

//Establishment of a school
School School::Creat_school(){
    if(school== nullptr){
        school = new School();}
    else{
        cout<<"Sorry,only one school can be establish!"<<endl;}
    return *school;
}

//Checking if the name entered is just words and not numbers
bool School::checkString(string str){
    for(int i=0 ; i < str.length();i++){
        if((str[i] < 65 || 97 > str[i] > 90)||(90 > str[i] > 97 || str[i] > 122)){
            return false;}}
    return true;
}

//Absorb the name
string School::Set_name(){
    string Name;
    cout<<"Enter name: ";
    cin>>Name;
    cin.clear();
    while(!checkString(Name)){
        cout<<"First name must be a string, please try again: ";
        cin>>Name;
        cin.clear();}
    return Name;
}

//Absorb Last name
string School::Set_lastname(){
    string LastName;
    cout<<"Enter last name: ";
    cin>>LastName;
    cin.clear();
    while(!checkString(LastName)){
        cout<<"Last name must be a string, please try again: ";
        cin>>LastName;
        cin.clear();}
    return LastName;
}

bool School::checkNumberClass(const string &num){
    int Number=stoi(num);
    if((Number>3)||(Number<1))
        return false;
    return true;
}


int School::Set_Class_Number(){
    string number;
    cout<<"Enter number of a class(The number of classes is between 1 and 3): ";
    cin>>number;
    cin.clear();
    while(!checkStringNumber(number)){
        cout<<"The Number must be between 1-3. Please try again: ";
        cin>>number;
        cin.clear();}
    while(!checkNumberClass(number)){
        cout<<"The Number must be between 1-3. Please try again: ";
        cin>>number;
        cin.clear();}
    return stoi(number);
}
int School::Set_numofkids(){
    string numofkids;
    cout<<"Enter the number of kids that are pupil in the school: ";
    cin>>numofkids;
    cin.clear();
    while(!checkStringNumber(numofkids)){
        cout<<"Must be Number. Please try again: ";
        cin>>numofkids;
        cin.clear();}
    
    return stoi(numofkids);
}


char School::Set_Layer(){
    char namelayer;
    cout<<"Type the name of the layer: ";
    cin>>namelayer;
    cin.clear();
    while(namelayer<'a' || namelayer>'f'){
        cout<<"Layer must be between a-f. Please try again: ";
        cin>>namelayer;
        cin.clear();
    }
    return namelayer;
}
    

double School:: seniority(){
    double Seniority;
    cout<<"Enter senioruty years: ";
    cin>>Seniority;
    cin.clear();
        while(isdigit(Seniority)||(typeid(Seniority) == typeid(double()))){
            cout<<"Seniority Must be number,please try again:";
            cin>>Seniority;
            cin.clear();}
    return Seniority;
}

//Initialization of the courses taught by the teacher
vector<string> School::Set_Courses(){
    vector<string> courses;
    string Name;
    int number;
    cout<<"How many cuorses do you have(Just numbers): ";
    cin>>number;
    cin.clear();
    while(isdigit(number)){                          //Checks the object type if it is of type 
        cout<<"Must be Number. Please try again: "<<endl;
        cin>>number;
        cin.clear();}
    for(int i = 0 ;i < number;i++){
        cout<<i+1<<". Courses name: ";
        cin.clear();
        cin>>Name; 
        courses.push_back(Name);}
    return courses;
}
 

string School::Set_Number_Office(){
    string office_number;
    cout<<"Enter Number office: ";
    cin>>office_number;
    cin.clear();
    while(!checkStringNumber(office_number)){
        cout<<"Must be a Number, please try again: ";
        cin>>office_number;
        cin.clear();}
    return office_number;
}

bool School::checkStringNumber(const string &num){
    return num.find_first_not_of("0123456789") == string::npos;
}

double School::ManagerSeniority(){
    double seniority;
    cout<<"Enter Manager senioruty: ";
    cin>>seniority;
    cin.clear();
        while(isdigit(seniority)||(typeid(seniority) == typeid(double()))){
            cout<<"Academic Years Must be number,please try again:";
            cin>>seniority;
            cin.clear();}
    return seniority;
}

bool School::checkGrade(string grade){
    if(checkStringNumber(grade)){
        int Grade = stoi(grade);
        if((Grade<=100)&&(Grade>=0)){
            return true;
        }}
    return false;
}
       
    
void School::menu(){
    Manager* manager = Manager::Create_manager();
    int choice;
    string Menu = "**************************************************************\n"
                 "Welcome to the school management system\n" 
                 "Please choose one of the following options: \n "
                 "***************************************************************\n"
                 "\t1) Add Pupil.\n"
                 "\t2) Add Teacher.\n"
                 "\t3) Add Tutor.\n"
                 "\t4) Add Manager.\n"
                 "\t5) Add Secretary.\n"
                 "\t6) Print person details.\n"
                 "\t7) Print outstanding people.\n"
                 "\t8) Print tutor's class.\n"
                 "\t9) Highest paid worker.\n"
                 "\t10) Exit\n"
                 "****************************************************************\n";
    do{    
        cin.clear();
//        cin.ignore(1000,'\n');
        cout<<Menu;
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Adding a student"<<endl;
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());          // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());          // copying the contents of the string to char*
                int NumberClass {Set_Class_Number()};
                char layer {Set_Layer()};
                vector<double> Grades;
                string number,grade;
                cout<<"How many courses do you have(Just numbers): ";
                cin>>number;
                cin.clear();
                while(!checkStringNumber(number)){                          //Checks the object type if it is of type 
                    cout<<"Must be Number. Please try again: "<<endl;
                    cin>>number;
                    cin.clear();}
                int Number = stoi(number);
                for(int i = 1 ;i <= Number;i++){
                    cout<<i<<". Grade: ";
                    cin>>grade;
                    cin.clear();
                    while(!checkGrade(grade)){         //Checks the object type if it is of type 
                        cout<<"Must be Number.\n Grade must be between 0-100 Please try again: ";
                        cin>>grade;
                        cin.clear();}
                    int Grade = stoi(grade); 
                    Grades.push_back(Grade);}
                Pupil *New_pupil = new Pupil (FirstName, LastName, layer, NumberClass, Grades);
                student.push_back(New_pupil);
                school_layers.at(layer-'a')->Getclass(NumberClass-1)->set_student(New_pupil);
                cout<<endl;
                break;
            }
            case 2:{
                cout<<"Adding a Teacher"<<endl;
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());          // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());          // copying the contents of the string to char*
                vector<string>courses=Set_Courses();
                double Seniority = seniority();
                Teacher* New_Teacher=new Teacher(FirstName,LastName,courses,Seniority);
                worker.push_back(New_Teacher);
                break;
                }
            
            case 3:{
                cout<<"Adding a Tutor"<<endl;
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());          // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());          // copying the contents of the string to char*
                vector<string>courses=Set_Courses();
                double Seniority = seniority();
                char layer {Set_Layer()};
                int NumberClass {Set_Class_Number()};
                char replace;
                if(school_layers.at(layer-'a')->Getclass(NumberClass-1)->is_Tutor()){
                    Class* ptrclass = school_layers.at(layer-'a')->Getclass(NumberClass-1);
                    Tutor* New_Tutor = new Tutor(FirstName,LastName,courses,Seniority,ptrclass);
                    worker.push_back(New_Tutor); 
                    school_layers.at(layer-'a')->Getclass(NumberClass-1)->set_Tutor(New_Tutor);
                    }  
                else{
                    cout<<"There is an educator in this class, would you like to replace him?(Y/N) ";
                    char replace;
                    do{
                        cin>>replace;
                        cin.clear();
                        if(replace=='y'||replace=='Y'){
                        school_layers.at(layer-'a')->Getclass(NumberClass-1)->delptrTutor();
                        Class* ptrclass = school_layers.at(layer-'a')->Getclass(NumberClass-1);
                        Tutor* New_Tutor = new Tutor(FirstName,LastName,courses,Seniority,ptrclass);
                        worker.push_back(New_Tutor);
                        //dlelet  tutor worker list  
                        for(int i=0;i<worker.size();i++){                  //Check that the educator's full name is in the workers' vector
                            if((strcmp(FirstName, worker.at(i)->Get_name()) == 0)&&(strcmp(LastName, worker.at(i)->Get_lastname()) == 0)){
                                if(dynamic_cast<Tutor*>(worker.at(i))){
                                    worker.erase(worker.begin()+i,worker.begin()+i+1);
                                }
                            }
                        }
                        break;  
                        }
                        else if(replace=='n'||replace=='N'){
                        break;}
                        else{
                        cout<<"Incorrect typing Please try again: ";}
                        }while(true);}
            break;
            } 
            
            case 4:{
                if(manager){
                    cout<<"Sorry there is a principal already at this school"<<endl;
                    break;
                }
                cout<<"Adding a Manager"<<endl;
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());            // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());          // copying the contents of the string to char*
                string office_number= Set_Number_Office();
                double Manager_seniority = ManagerSeniority();
                char flag;
                cout<<"You ar also a teacher?(Y/N): ";
                do{
                cin>>flag;
                cin.clear();
                if(flag=='y'||flag=='Y'){
                    double Seniority = seniority();
                    vector<string>courses=Set_Courses();
                    manager = new Manager(FirstName,LastName, Seniority, Manager_seniority, office_number, courses) ;
                    worker.push_back(manager);
                    break;
                    }
                else if(flag=='n'||flag=='N'){
                    manager = new Manager(FirstName,LastName, Manager_seniority, office_number);
                    worker.push_back(manager);
                    break;}
                else{
                    cout<<"Incorrect typing Please try again: ";}
                }while(true);

            break;
            } 
           
            case 5:{
                cout<<"Adding a Secretary"<<endl;
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());          // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());
                double Seniority = seniority(); 
                int NumOfKids = Set_numofkids();
                Secretary *NewSecretary = new Secretary(FirstName,LastName,Seniority,NumOfKids);
                worker.push_back(NewSecretary);
                break;
                }
            
            case 6:{
                VecAnalyser<Worker> workers;
                VecAnalyser<Pupil> pupils;

                if (student.size() + worker.size() == 0) {
                    cout << "The school is empty" << endl;
                }
                else {
                    cout << "Workers: ";
                    if(worker.size() !=0){
                        cout<<endl;
                        workers.printAll(worker);
                        cout<< endl;}
                    else{
                        cout<<"None"<<endl;
                        }
                        cout << "Pupils: ";
                    if(student.size()!=0){
                        cout << endl;
                        pupils.printAll(student);}
                    else{
                        cout<<"None"<<endl;
                        }
                }
                break;
                
            break;}
            
            case 7:{
                cout<< endl;
                if (student.size() + worker.size() == 0){
                    cout << "The school is empty" << endl;
                }
                else {
                    if(worker.size() != 0){
                        VecAnalyser<Worker> workers;
                        cout << "Outstanding Workers: " << endl;
                        workers.PrintOutstandingPeople(worker);}
                    cout<<endl<<endl;
                    if(student.size()!=0){
                        VecAnalyser<Pupil> pupils;
                        cout << "Outstanding Pupils: " << endl;
                        pupils.PrintOutstandingPeople(student);}
                    cout<< endl;
                    }
                break;
                }
            
            case 8:{
               int countr=1;
                double sum {0},Average {0};
                char* FirstName;char* LastName;
                FirstName = strdup(Set_name().c_str());          // copying the contents of the string to char*
                LastName = strdup(Set_lastname().c_str());
                for(int i=0;i<worker.size();i++){                  //Check that the educator's full name is in the workers' vector
                    if((strcmp(FirstName, worker.at(i)->Get_name()) == 0)&&(strcmp(LastName, worker.at(i)->Get_lastname()) == 0)){
                        if(dynamic_cast<Tutor*>(worker.at(i))){
                            Tutor* Tutorc = dynamic_cast<Tutor*>(worker.at(i));
                            Class *TutorClass = Tutorc->Get_Class(); 
                            cout<<"Class-Layer: "<<TutorClass->Get_class_number()<<TutorClass->Get_layer_name()<<endl;
                            vector<Pupil*>vecstudent = TutorClass->get_vecstudent();
                            for(Pupil *p : vecstudent){
                                sum += p->GradeAverage();}
                            Average = sum/vecstudent.size();
                            cout<<"The class grades average is: "<< Average <<endl;
                            VecAnalyser<Pupil> pupils;
                            cout << "Pupils: " << endl;
                            pupils.printAll(vecstudent);
                            cout << "Outstanding Pupils: " << endl;
                            pupils.PrintOutstandingPeople(vecstudent);
                            }
                        }countr++;
                    }
                if(countr==worker.size()){
                    cout<<"There is no employee by that name in the best school in the world"<<endl;}
                break;
                }
   
            case 9:{     
                cout<<"The highest salary"<<endl;
                VecAnalyser<Worker>workers;
                workers.printMax(worker);                
                break;
            }
            
            case 10:{
                cout << "Goodbye" << endl;
//                vector<Class*>layer = school_layers.at(i)->get_veclass();
                for(int i=0; i<student.size();i++)
                    delete student.at(i);
                for(int i=0; i<worker.size();i++)
                    delete worker.at(i);
                for(int i=0; i < school_layers.size() ;i++){
                    for(int k=0; k < Number_class_in_layers ;k++){
                        delete school_layers.at(i)->get_veclass().at(k);}
                    delete school_layers.at(i);
                    }
                delete school;
                break;  
                }
            default:{
                    cout << "Bad choice! Please try again." << endl;}
            }

    } while(choice != 10);  
}
    
    
    
    
    
    
School::~School()
{

}

