/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 
#include "MatchMakingAgency.h"
#include <vector>
#include <iostream>

using namespace std;
MatchMakingAgency::MatchMakingAgency()
{
        this->Client_number= 0;
        this->ListOfClients.clear();        //the vector listofclient all ready initialization in the private to empty vector type client 
}

MatchMakingAgency &MatchMakingAgency::operator=(MatchMakingAgency &obj)
{                                                //initialization the objects by comper another objrct 
    this->Client_number = obj.Client_number;
    copy(ListOfClients.begin(),ListOfClients.end(),std::back_inserter(obj.ListOfClients)); // Initialized Copy the original vector vector of the object 
    return *this;
}

Client& MatchMakingAgency::FindingCustomer(String &ID)                 //Finding a customer by ID
{   
     Client *Temporary;                               //Initialized within the Class and copy constractor in client to defdalt 
     int clients_len = this->ListOfClients.size() ;  // long vector 
     for(int i = 0;i<clients_len;i++)                //find the loction id un the vector 
        {
            if(this->ListOfClients[i].GetId() == ID)
                {   
                    Temporary = &ListOfClients[i];
                }}
    return *Temporary;
}
void MatchMakingAgency::FindMacth(String &ID)
{
    
    if(Client_number==0)                //Check if there are customers
        {cout<<"None client"<<endl;}
    if(Client_number>1){//If there is only one customer and a match needs to be found for him
            Client Temporarycustomer;                      //Initialized within the Class and copy constractor in client to defdalt 
            Temporarycustomer = FindingCustomer(ID);
            int clients_len = this->ListOfClients.size() ;  // long vector 
            if(Temporarycustomer.getHobbies() == 0 || Temporarycustomer.getGender() == '-'){  // If the customer is not on the list ie not initialized      
                cout<<  "This id is no our Customer's"<<endl;}
            else{
                cout<<"Matches found for "<<Temporarycustomer.getname();   
                for(int i=0 ;i < clients_len; i++) // Running on the entire loop and checking the fit between the customer and the other customers
                    {
                    if((ListOfClients.at(i) == Temporarycustomer)&&(!(Temporarycustomer.Id == ListOfClients.at(i).Id))){
                        cout<<"Name: "<<this->ListOfClients.at(i).getname();
                        if ((this->ListOfClients.at(i).getGender() == 'f') || (this->ListOfClients.at(i).getGender() == 'F'))       //Checking the type of Gender
                            cout << "Gender: Female" << endl;
                        else
                            cout << "Gender: Male" << endl;
                        cout<<"List of hobbies: ";
                         for (int k = 0; k < ListOfClients[i].getHobbies(); k++)
                            {
                        cout << ListOfClients[i].getListOfHobbies()[k];
                        if (k + 1 != ListOfClients[i].getHobbies()) {          //print client hobby list 
                        cout << ", ";}
                            }
                        cout<<endl;
                        }
                    else{
                        cout<<"None"<<endl;
                        }
                }
    }}
}
ostream& operator<<(ostream& out, const MatchMakingAgency& M)
{
        //print each Client with all his details
    for (Client ListOfClients : M.ListOfClients) {
        out << "Name: " << ListOfClients.getname();
        out << "Id: "<<ListOfClients.GetId();
        if ((ListOfClients.getGender() == 'f') || (ListOfClients.getGender() == 'F'))       //Checking the type of Gender
            out << "Gender: Female" << endl;
        else
            out << "Gender: Male" << endl;

        out << "Age: " << ListOfClients.getAge() << endl << "list of hobbies: " ;
        for (int i = 0; i < ListOfClients.getHobbies(); i++)
        {
            out << ListOfClients.getListOfHobbies()[i];
            if (i + 1 != ListOfClients.getHobbies()) {          //print client hobby list 
                out << ", ";}
        }

        out << endl;   
    }

    return out;
}
MatchMakingAgency& MatchMakingAgency::operator+=(Client &obj)
{
    for(int i=0;i<this->ListOfClients.size();i++){
        if(ListOfClients[i].Id == obj.Id){
            cout<< obj.getname()<<"-customer is already in the list"<<endl;
            return *this;}}
    ListOfClients.push_back(obj);
    Client_number++;
    return *this;  
}
MatchMakingAgency &MatchMakingAgency:: operator-=(Client &client)
{
    vector<Client>vec;                         //open new vector 
    for(int i=0;i<ListOfClients.size();i++){       
        if(ListOfClients[i].Id == client.Id){
            continue; }
        else{
           vec.push_back(ListOfClients[i]);}        //Initialized the new vector 
            }
    if(vec.size() == ListOfClients.size()-1){
        Client_number--;}
    ListOfClients.clear();
    copy(vec.begin(),vec.end(),std::back_inserter(ListOfClients)); // Initialized Copy the original vector vector of the object
    vec.clear();
    return *this;}
MatchMakingAgency::~MatchMakingAgency()
{
    ListOfClients.clear();

}

