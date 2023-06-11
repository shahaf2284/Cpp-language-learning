/* Assignment C++: 2  
Author: Shahaf Zohar ID: 205978000
Author: Shaked Basa, ID: 206310781 
*/ 
#include <iostream>
#include "Menu.h"
#include "MatchMakingAgency.h"
#include "Client.h"
#include "string.h"
Menu::Menu()
{
   MatchMakingAgency MatchingMakingAgency; 
}
void Menu::BringUpMenu()
{
    char choose ='-';
    char menu[]="\tPlease choose one of the following options:\n" 
            "==========================================================\n"
            "1) Add a new client to the database.\n" 
            "2) Remove an existing client from the database.\n" 
            "3) Print all clients.\n" 
            "4) Print all matches for a client.\n" 
            "5) Quit the program.\n" 
            "==========================================================\n";
 while (choose != '5') {
        cout << menu;
        cin >> choose;

        switch (choose) {
            case '1': 
            {
                char container_name[256];   //continer(Each variable loop is filled with a different value hence the name of the container)
                char container_identity[256];     //continer 
                char GENDER;
                double AGE;
                int Hobby;
                cin.ignore(1);
                cout<<"Please, fill in the details: name,id,gender,hoddy"<<endl;
                cout << "Please, enter your name: ";
                cin.getline (container_name,256);
                String fullname(container_name);        
                cout << "Please, Enter Your id: ";
                cin.getline (container_identity,256);
                String ID(container_identity);
                cout<<"Enter Your gender(M/F): ";
                cin>> GENDER;
                cout<<"Enter Your age (The minimum age here is 18): ";
                cin>>AGE;
                cout<<"How many hobbies do you have? ";
                cin>>Hobby;
                char **Listhobby;
                char hob[200];
                Listhobby = new char*[Hobby];     //Dynamic memory
                for(int i=0;i<Hobby;i++)
                    {   
                        cout<<"Enter hobby number"<<i+1<<": ";
                        cin >> hob;
                        Listhobby[i] = new char[strlen(hob)+1];     //Dynamic memory
                        strcpy(Listhobby[i],hob);
                    }
                cout<<endl;
                if(AGE>=18){
                    if(GENDER=='f'||GENDER=='F'||GENDER=='m'||GENDER=='M'){
                            Client client(ID,fullname,GENDER,AGE,Hobby,Listhobby);
                            MatchingMakingAgency+=client;}
                    else{
                        cout<<"Your gender is incorrect. Please re-enter"<<endl;
                        break;
                        }}
                else{
                    cout<<"Your age does not meet customer service conditions"<<endl;
                    }
                
                break;}
            case '2': 
            {
                char IdToRemove[200];
                cout<<"Enter the customer ID you want to remove:";
                cin>>IdToRemove;
                String Remove(IdToRemove);
                MatchingMakingAgency -= MatchingMakingAgency.FindingCustomer(Remove);
                break;}
            case '3':{
                cout<<"The Agency customers: "<<endl;
                cout<<MatchingMakingAgency;
                break;}
            case '4': {
                char IdToMacth[200];
                cout<<"Enter the customer you want to know who his matches are:";
                cin>>IdToMacth;
                String  Macth(IdToMacth);
                cout<<"The customer matchs: " <<endl;
                MatchingMakingAgency.FindMacth(Macth);
                break;}      
            case '5': 
                cout << "Goodbye\n"; 
                break;
            default: 
                cout << "Choose the right menu"<<endl;
                break;
    }}
}


Menu::~Menu()
{
    cout << "Freeing memory Menu" << endl;

}

