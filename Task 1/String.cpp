/* Assignment: 1 
Author: shahaf zohar ID: 205978000
Author: shaked basa, ID: 206310781 
*/ 

#include <iostream>
#include "String.h"

using namespace std;


String::String()
{                          // Creating a default String
    arr[10] = {};      //  all the value is initialization by NULL
}


void String::copy(char letter[])
{            // Creating a array by copy the char
    int index= 0;
    while((letter[index] != '\0') && (index != 9))       // run until the indx is NULL or the index is 10 
        {
            arr[index] = letter[index];                    // copy the copy the string For index by index 
            index++;
        }
    bool isbool  = (index == 9) ? false: true;           // chek if he put into the array 10 variables 
    if(isbool)
    {
        for(int k = index;k<10;k++)
        {
            arr[k]='\0';
            
        }
    }
}
String::String(char letter[])
{             // Creating a array by copy the array
       this->String::copy(letter);
} 
void String::updateValue(char letter[])
{
   this->String::copy(letter);
} 

bool String::setCharAt(char sign, int index)
{
    if(index < 9)
    {
         
        if(arr[index] == '\0') 
        {
            arr[index] = sign;
            arr[index+1] =='\0';
        } 
        else 
        {
            arr[index] = sign;    
        }
        return true;
    }
    else
    {
        return false;
    }
}
bool String::setCharsByUser()
{   
    char letter, array[10] = {};            //initialization array 
    int index;                                  // attribute
    bool fleg =true;                
    do{
        cout << "Which index(between 0 to 8) do you want to replace?(if you dont want to replace Enter -1)" << endl;
        cin >>index;
        if(index == -1)                       // EXIT loop if the User wants 
            {
            break;
            }
        else if((index > 8) || (index < 0))     // worng input 
            {
                bool fleg = false;
                return false;   
         }
        else{
        
            cout << "Enter char: ";             // receive char from the user
            cin >> letter;  
            array[index] = letter;              // execution 
            cout << "\n";
            }
        }while(true);                           // chek if the input is correct                      
    if(fleg)           // if the input is correct change arr  
    {   // copy the array
        for(int i =0; i<=9; i++)
            {
                if(array[i] != 0)
                    {
                        arr[i]= array[i];
                    }
    }    return true;
}
    return true;
    
    
}                   
char String::getCharAt(int index)
{
    char negtiv {'-'};
    return (arr[index] == '\0' || index > 8) ?  negtiv : arr[index];
}
void String::printValue()
{
    int i=0;
    while(arr[i] != '\0')
        {
            cout<< arr[i];
            i++;
        }
    cout<<"\n";
}
void String::printValue(bool isbool)
{
    int i =0;
    if(isbool)
        {
    /*running the loop from 0 to the length of the string
    * to convert each individual char of string to uppercase
    * by subtracting 32 from the ASCII value of each char
    */
        while(arr[i] != '\0')
            {
       /* Here we are performing a check so that only lowercase 
       * characters gets converted into uppercase. 
       * ASCII value of a to z(lowercase chars) ranges from 97 to 122 
       */ 
            if(arr[i]>=97 && arr[i]<=122)
            {
                cout << char(arr[i]-32);
            }  
            else{
                cout << arr[i];    
                }
            i++;
            }
        cout <<"\n";
        }
    else
        {
        while(arr[i] != '\0')
            {       
        /* Here we are performing a check so that only uppercase 
       * characters gets converted into uppercase. 
       * ASCII value of a to z(uppercase chars) ranges from 65 to 90 
       */ 
            if(arr[i]>=65 && arr[i]<=90)
            {
                cout << char(arr[i]+32);
            } 
            else{
                cout << arr[i];    
                }
                 i++;
        }
        cout <<"\n";
        }
}    



String::~String()
{
    cout << "Destructor calld for: NONE value in String class"<<endl;

}