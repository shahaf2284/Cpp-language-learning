/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 
#include <iostream>
#include "Menu.h"
#include "Fraction.h"
#include "String.h"
#include "TwoDigits.h"

using namespace std;

Menu::Menu(){}
void Menu::mainMenu()
{
    char menu[] =   "Please chooes menu: \n"
                    "1. TwoDigits menu.\n"
                    "2. Fraction menu.\n"
                    "3. String.\n"
                    "4. Exit program.\n";
    int index = 0;

    while (index != 4) {
        
        cout << menu;
        cin >> index;

        switch (index) {
            case 1: 
                this->twoDigitsMenu();
                break;
            case 2: 
                this->fractionMenu();
                break;
            case 3:
                this->stringMenu();
                break;
            case 4: 
                cout << "Goodbye\n"; 
                break;
            default: 
                cout << "Choose the right menu";
                break;
    }}
}
void Menu::twoDigitsMenu()
{
    char num1 , num2;          // attribut the value 
    int num3;   
    bool flag = true;
    int TwoDigitsindex = 0;

    cout <<"This program menu creates a double-digit number."<< endl;               // explin what the function do and 
    cout <<"two numbers are required with the first begin units and the second is Dozens."<< endl; // which number the user need to enter
    while(flag){
        cout <<"Please enter two number between 0-9"<< endl;                    // the char need to be between 0 to 9 
        cin >> num1>> num2;
        flag = (num1 < 10 && num2 < 10) ?  true : false; //chek if the number is correct
        if(flag){
            cout <<"Enter the correct number."<< endl;} }    
    flag = true;
    while(flag){
        cout <<"Please enter number between 0-99"<< endl;
        cin >> num3;    
        flag = (num3 < 100) ?  false : true;  //chek if the number is correct 
        if(flag){
            cout <<"Enter the correct number."<< endl;}}
    TwoDigits number1(num1,num2), number2(num3);                //created two object 
    
    char MenutwoDigits[] =  "Please select one of the options: \n"            
                            "1. Update the first number .\n"
                            "2. Calculate the sum of the numbers.\n"
                            "3. Print the first and second number.\n"
                            "4. Exit program.\n";
    
    while (TwoDigitsindex != 4) {
        
        cout << MenutwoDigits;
        cin >> TwoDigitsindex;

        switch (TwoDigitsindex) 
        {
            case 1: {
                int UpdateNum=0;
                flag = true;
                cout <<"Please enter number between 0-99"<< endl;
                cin >> UpdateNum;                                            //chek if the number is correct 
                number1.update(UpdateNum);
                break;}
            case 2: {
                cout << "the sum of ";
                number1.printValue();
                cout<<" + ";
                number2.printValue();
                cout<<" is: "<<number1.value()+number2.value()<<endl;  
                break;}
            case 3: {
                cout <<"First two digit number:";
                number1.printValue();
                cout <<"\nSecond two digit number:";
                number2.printValue();
                cout<<"\n";
                break;}
            case 4: 
                cout << endl; 
                break;
            default: 
                cout << "Choose the right menu";
                break;
    }}
    
    
}
void Menu::fractionMenu()
{
    int num1 , num2;                             // attribut the value 
    int Fractionindex = 0;
    cout <<"This program menu creates a fraction number."<< endl;               // explin what the function do and 
    cout <<"two numbers are required with the first begin numerator and the second is denominator."<< endl; // which number the user need to enter
    cout <<"Please enter two number"<< endl;                     
    cin >> num1>> num2;                         // get dat from the user 
    Fraction Fract(num1,num2);                //created two object   
    
    char FractionMenu[] =   "Please select one of the options: \n"
                            "1. update Numerator.\n"
                            "2. update denominator.\n"
                            "3. print the fraction.\n"
                            "4. sum of the fraction.\n"
                            "5. Exit program.\n";

    while (Fractionindex != 5) {
        
        cout << FractionMenu;
        cin >> Fractionindex;

        switch (Fractionindex) {
            case 1: 
                int newNumerator ;
                cout <<"Please enter number to change the numerator:"<< endl; 
                cin >> newNumerator;
                Fract.updateNumerator(newNumerator);
                break;
            case 2: 
                int newdenominator ;
                cout <<"Please enter number to change the denominator:"<< endl; 
                cin >> newdenominator;
                Fract.updateDenominator(newdenominator);
                break;
            case 3: 
                Fract.printValue();
                cout<<endl;
                break;
            case 4: 
                double newfract;
                cout <<"Please enter decimal number:"<< endl; 
                cin>>newfract;
                cout <<"The sum of ";
                Fract.printValue();
                cout <<" and "<<newfract <<" is: "<< Fract.value()+ newfract << endl;
                break;
            case 5:
                cout << endl;  
                break;
            default: 
                cout << "Choose the right menu";
                break;
    }}
}
void Menu::stringMenu()
{
    String list;                  // Open an object
    int Stringindex = 0;

    while (Stringindex != 8) {
        
        cout <<  "Please select one of the options: \n"                          //menu
                    "1. Update the string.\n"
                    "2. Update the array for all array members,one by one.\n"
                    "3. Change character by index.\n"
                    "4. The value of the character in the index.\n"
                    "5. Print the string.\n"
                    "6. Print the string in lowercase.\n"
                    "7. Print the string in uppercase.\n"
                    "8. Exit program.\n";
        cin >> Stringindex;                                               //chooes options

        switch (Stringindex) {
            case 1:{
                char GetString[] {};                       // get from the user string to copy the string to the mathond
                cout <<"Please enter a word up to 9 characters long:"; 
                cin >> GetString;
                list.updateValue(GetString);
                break;}
            case 2:{
                list.setCharsByUser();                   //Update the array for each cell and compartment
                break;}
            case 3:{
                int index1 = 0;
                char a; 
                cout<<"Enter the index you want to replace:";
                cin>>index1;
                cout<<"Enter the char you want to replace:";
                cin>>a;
                cout <<((list.setCharAt(a,index1)) ? "Replacement completed successfully" : "The replacement did not type an incorrect value")<<endl; 
                break;}
            case 4:{ 
                int Location {0};
                cout <<"Enter index:";
                cin>>Location;
                if(Location>9 || Location<0)
                    {
                    cout<< "The index is invalid, enter index between 0 to 9."<<endl;
                    break;
                    }
                char value {list.getCharAt(Location)};
                if(value =='-')
                    {
                    cout<<value<<endl;
                    cout<<"The vale of the is NULL."<<endl;
                    break;         
                    }
                cout<<"The value in index "<< Location<<" is "<<value<<"."<<endl; 
                break;  }       
            case 5:{ 
                list.printValue();
                break;}
            case 6:{
                list.printValue(false);
                break;}
            case 7:{
                list.printValue(true);
                break;}
            case 8: {
                cout << endl; 
                break;}
            default:{
                cout << "Choose the right menu";
                break;}
}}
}

Menu::~Menu()
{
    cout << "Destructor calld for: NONE value in Menu class"<<endl;
}


